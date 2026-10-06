/*
A. Square String?
https://codeforces.com/problemset/problem/1619/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();

        if (n % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }

        string first = s.substr(0, n / 2);
        string second = s.substr(n / 2);

        cout << (first == second ? "YES\n" : "NO\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}