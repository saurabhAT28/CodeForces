/*
C. Hard Problem
https://codeforces.com/problemset/problem/2044/C
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
        cin >> n >> a >> b >> c;

        int first = min(n, a);
        int second = min(n, b);

        int remaining = 2 * n - first - second;

        int ans = first + second + min(remaining, c);

        cout << ans << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}