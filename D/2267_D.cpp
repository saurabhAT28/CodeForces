/*
D. Backrooms Hill
https://codeforces.com/contest/2267/problem/D
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
        int n, x;
        cin >> n;

        vector<int> position(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            position[x] = (i + 1) % 2;
        }

        bool dp[2] = {true, false};

        for (int x = 1; x < n; x++)
        {
            bool dp2[2] = {false, false};

            for (int s = 0; s < 2; s++)
            {
                if (!dp[s])
                    continue;

                // Put x on the LEFT.
                if (position[x] == (s + 1) % 2)
                {
                    dp2[s ^ 1] = true;
                }

                // Put x on the RIGHT.
                if (position[x] == (n + 1 - x + s) % 2)
                {
                    dp2[s] = true;
                }
            }

            dp[0] = dp2[0];
            dp[1] = dp2[1];
        }

        // n must be at position (#left elements + 1)
        bool ok = false;

        for (int s = 0; s < 2; s++)
        {
            if (dp[s] && position[n] == (s + 1) % 2)
            {
                ok = true;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}