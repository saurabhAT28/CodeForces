/*
A. Good Contest
https://codeforces.com/contest/2266/problem/A
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
        int n, a, b, c;
        cin >> n;
        cin >> a >> b >> c;

        cout << n - min({a, b, c}) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}