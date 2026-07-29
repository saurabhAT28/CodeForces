// update_readme.cpp
//
// Scans the repo root for problem-letter folders (A, B, C, ...), counts
// the .cpp solution files inside each, and rewrites the progress tracker
// table in README.md between the markers:
//
//   <!-- PROGRESS-TRACKER:START -->
//   ...
//   <!-- PROGRESS-TRACKER:END -->
//
// Build:  g++ -std=c++17 -O2 -o update_readme scripts/update_readme.cpp
// Run:    ./update_readme          (run from the repo root)
//
// Runs automatically via .github/workflows/update-readme.yml on every push.

#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

namespace fs = std::filesystem;

static const std::string START_MARKER = "<!-- PROGRESS-TRACKER:START -->";
static const std::string END_MARKER   = "<!-- PROGRESS-TRACKER:END -->";

// Repo root is assumed to be the parent of the "scripts" folder this file
// lives in, but we also fall back to the current working directory so the
// compiled binary works when run from the repo root (as the CI does).
static fs::path find_repo_root(const fs::path &exe_dir) {
    fs::path candidate = fs::current_path();
    if (fs::exists(candidate / "README.md")) {
        return candidate;
    }
    // Fallback: assume this binary sits alongside/inside the repo.
    return exe_dir.parent_path();
}

static bool is_single_upper_letter(const std::string &name) {
    return name.size() == 1 && std::isupper(static_cast<unsigned char>(name[0]));
}

static std::map<std::string, int> count_solutions_by_letter(const fs::path &root) {
    std::map<std::string, int> counts;

    for (const auto &entry : fs::directory_iterator(root)) {
        if (!entry.is_directory()) continue;

        std::string folder_name = entry.path().filename().string();
        if (!is_single_upper_letter(folder_name)) continue;

        int count = 0;
        for (const auto &file : fs::directory_iterator(entry.path())) {
            if (!file.is_regular_file()) continue;
            if (file.path().extension() == ".cpp") {
                ++count;
            }
        }
        if (count > 0) {
            counts[folder_name] = count;
        }
    }
    return counts;
}

static std::string build_table(const std::map<std::string, int> &counts) {
    int total = 0;
    std::ostringstream out;
    out << "| Problem Letter | Solved |\n";
    out << "|-----------------|--------|\n";
    for (const auto &[letter, count] : counts) {
        out << "| " << letter << " | " << count << " |\n";
        total += count;
    }
    out << "| **Total** | **" << total << "** |";
    return out.str();
}

static std::string read_file(const fs::path &path) {
    std::ifstream in(path, std::ios::binary);
    std::ostringstream ss;
    ss << in.rdbuf();
    return ss.str();
}

static void write_file(const fs::path &path, const std::string &content) {
    std::ofstream out(path, std::ios::binary);
    out << content;
}

static void update_readme(const fs::path &readme_path, const std::string &table) {
    std::string content = read_file(readme_path);

    size_t start = content.find(START_MARKER);
    size_t end = content.find(END_MARKER);

    std::string replacement = START_MARKER + "\n" + table + "\n" + END_MARKER;

    if (start != std::string::npos && end != std::string::npos && end > start) {
        end += END_MARKER.size();
        content.replace(start, end - start, replacement);
    } else {
        // Markers not found; append a new section at the end.
        while (!content.empty() && std::isspace(static_cast<unsigned char>(content.back()))) {
            content.pop_back();
        }
        content += "\n\n## \xF0\x9F\x93\x8A Progress Tracker\n\n" + replacement + "\n";
    }

    write_file(readme_path, content);
}

int main(int argc, char **argv) {
    fs::path exe_dir = fs::absolute(fs::path(argv[0])).parent_path();
    fs::path root = find_repo_root(exe_dir);
    fs::path readme_path = root / "README.md";

    if (!fs::exists(readme_path)) {
        std::cerr << "README.md not found at " << readme_path << "\n";
        return 1;
    }

    auto counts = count_solutions_by_letter(root);
    std::string table = build_table(counts);
    update_readme(readme_path, table);

    std::cout << "README.md progress tracker updated.\n" << table << "\n";
    return 0;
}