/*
D. Odd Queries
https://codeforces.com/problemset/problem/1807/D
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
        int n, q;
        cin >> n >> q;

        vector<ll> a(n + 1), pref(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        ll total = pref[n];

        while (q--)
        {
            int l, r;
            ll k;
            cin >> l >> r >> k;

            ll newSum = total - (pref[r] - pref[l - 1]) + (r - l + 1LL) * k;

            cout << (newSum % 2 ? "YES" : "NO") << '\n';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}