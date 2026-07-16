/*
A. Lucky?
https://codeforces.com/problemset/problem/1676/A
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
        int a = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int b = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
        cout << (a == b ? "YES" : "NO") << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}