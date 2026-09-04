/*
C. Vasilije in Cacak
https://codeforces.com/problemset/problem/1878/C
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
        ll n, k, x;
        cin >> n >> k >> x;

        ll minSum = k * (k + 1) / 2;
        ll maxSum = k * (2 * n - k + 1) / 2;

        if (x >= minSum && x <= maxSum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}