/*
A. Odd Divisor
https://codeforces.com/problemset/problem/1475/A
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
        ll n;
        cin >> n;
        while (n % 2 == 0)
        {
            n /= 2;
        }
        cout << (n > 1 ? "YES" : "NO") << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}