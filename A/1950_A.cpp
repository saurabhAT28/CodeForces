/*
A. Stair, Peak, or Neither?
https://codeforces.com/problemset/problem/1950/A
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
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && b < c)
            cout << "STAIR\n";
        else if (a < b && b > c)
            cout << "PEAK\n";
        else
            cout << "NONE\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}