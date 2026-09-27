/*
B. KiaKio and Squared Numbers
https://codeforces.com/contest/2269/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll digitSum(ll x)
{
    ll sum = 0;
    while (x > 0)
    {
        ll d = x % 10;
        sum += d * d;
        x /= 10;
    }
    return sum;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;

        const int STEPS = 222;

        unordered_map<ll, ll> freq;
        freq.reserve(n * 2);

        for (int i = 0; i < n; i++)
        {
            ll v = a[i];
            for (int s = 0; s < STEPS; s++)
            {
                v = digitSum(v);
            }
            freq[v]++;
        }

        ll ans = 0;
        ll x = 0;

        for (auto &p : freq)
        {
            x = p.second;
            ans += x * (x - 1) / 2;
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
