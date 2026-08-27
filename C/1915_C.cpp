/*
C. Can I Square?
https://codeforces.com/problemset/problem/1915/C
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

        ll sum = 0;
        ll x;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }

        ll root = sqrtl(sum);

        if (root * root == sum)
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