/*
C. Target Practice
https://codeforces.com/problemset/problem/1873/C
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
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 10; j++)
            {
                if (s[j] == 'X')
                {
                    int d = min({i, j, 9 - i, 9 - j});
                    ans += d + 1;
                }
            }
        }
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}