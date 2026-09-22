/*
A. Polycarp and Coins
https://codeforces.com/problemset/problem/1551/A
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

        ll c1 = n / 3;
        ll c2 = n / 3;

        if (n % 3 == 1)
        {
            c1++;
        }
        else if (n % 3 == 2)
        {
            c2++;
        }

        cout << c1 << " " << c2 << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}