/*
A. Coins
https://codeforces.com/problemset/problem/1814/A
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
        ll n, k;
        cin >> n >> k;

        if (k % 2 == 1)
            cout << "YES\n";
        else
        {
            if (n % 2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
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