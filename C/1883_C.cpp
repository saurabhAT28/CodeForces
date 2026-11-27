/*
C. Raspberries
https://codeforces.com/problemset/problem/1883/C
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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        int ans = k;
        int even = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % k == 0)
            {
                ans = 0;
            }

            ans = min(ans, (k - a[i] % k) % k);

            if (a[i] % 2 == 0)
            {
                even++;
            }
        }

        if (k == 4)
        {
            if (even >= 2)
            {
                ans = min(ans, 0);
            }
            else if (even == 1)
            {
                ans = min(ans, 1);
            }
            else
            {
                ans = min(ans, 2);
            }
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