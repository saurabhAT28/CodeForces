/*
B. Ordinary Numbers
https://codeforces.com/problemset/problem/1520/B
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
        string n;
        cin >> n;

        int d = n.size();
        int first = n[0] - '0';

        int ans = 9 * (d - 1) + first;

        string ordinary(d, n[0]);

        if (ordinary > n)
        {
            ans--;
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