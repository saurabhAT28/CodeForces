/*
A. Extremely Round
https://codeforces.com/problemset/problem/1766/A
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

        int ans = 0;
        int p = 1;

        while (p <= n)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (i * p <= n)
                {
                    ans++;
                }
            }
            p *= 10;
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