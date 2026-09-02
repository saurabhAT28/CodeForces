/*
A. Holiday Of Equality
https://codeforces.com/problemset/problem/758/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    ll mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += mx - a[i];
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}