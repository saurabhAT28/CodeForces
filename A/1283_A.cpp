/*
A. Minutes Before the New Year
https://codeforces.com/problemset/problem/1283/A
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
        int h, m;
        cin >> h >> m;
        cout << 1440 - (h * 60 + m) << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}