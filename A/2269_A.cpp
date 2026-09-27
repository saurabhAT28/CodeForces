/*
A. SauSaDe Bank
https://codeforces.com/contest/2269/problem/A
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

        ll ans = (1LL << (n + 1 - k));
        ans += 2LL * (k - 1);
        
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