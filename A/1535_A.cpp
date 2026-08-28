/*
A. Fair Playoff
https://codeforces.com/problemset/problem/1535/A
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

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int w1 = max(a, b);
        int w2 = max(c, d);

        int mx1 = max({a, b, c, d});
        int mx2 = -1;

        if (a != mx1)
            mx2 = max(mx2, a);
        if (b != mx1)
            mx2 = max(mx2, b);
        if (c != mx1)
            mx2 = max(mx2, c);
        if (d != mx1)
            mx2 = max(mx2, d);

        if ((w1 == mx1 && w2 == mx2) ||
            (w2 == mx1 && w1 == mx2))
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