/*
B. osu!mania
https://codeforces.com/problemset/problem/2009/B
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

        string s[500];

        for (int i = 0; i < n; i++)
            cin >> s[i];

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < 4; j++)
            {
                if (s[i][j] == '#')
                {
                    cout << j + 1;
                    if (i > 0)
                        cout << " ";
                    break;
                }
            }
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}