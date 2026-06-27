/*
A. Insomnia cure
https://codeforces.com/problemset/problem/148/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int k, l, m, n, d, ans;
    cin >> k >> l >> m >> n >> d;

    ans = 0;

    for (int i = 1; i <= d; i++)
    {
        if ((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0))
            ans++;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}