/*
A. Anton and Letters
https://codeforces.com/problemset/problem/443/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    set<char> s;
    string str;
    getline(cin, str);
    // str="{a, b, c}";

    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            s.insert(str[i]);
    }
    cout << s.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}