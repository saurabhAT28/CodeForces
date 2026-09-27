/*
C. K Is Important
https://codeforces.com/contest/2269/problem/C
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
        int n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;

        int w = k - 1;
        int s = min(w, n - w);

        ll ans = 0;
        for (int i = 0; i < s; i++)
        {
            ans += max(a[i], a[n - 1 - i]);
        }

        int lo = w, hi = n - w - 1;
        if (lo <= hi)
        {
            for (int i = lo; i <= hi; i++)
                ans += a[i];
        }

        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
