/*
B. Equal Candies
https://codeforces.com/problemset/problem/1676/B
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

        vector<int> a(n);
        int minCandy = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            minCandy = min(minCandy, a[i]);
        }

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += a[i] - minCandy;
        }

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