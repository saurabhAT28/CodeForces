/*
A. Marathon
https://codeforces.com/problemset/problem/1692/A
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

        int a, b;
        int ans = 0;

        cin >> a;

        for (int i = 0; i < 3; i++)
        {
            cin >> b;
            if (b > a)
                ans++;
        }

        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}