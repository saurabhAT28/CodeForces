/*
A. Plus One on the Subset
https://codeforces.com/problemset/problem/1624/A
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
        int n;
        cin >> n;

        ll mn = LLONG_MAX;
        ll mx = LLONG_MIN;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            mn = min(mn, x);
            mx = max(mx, x);
        }

        cout << mx - mn << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}