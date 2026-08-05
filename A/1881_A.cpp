/*
A. Don't Try to Count
https://codeforces.com/problemset/problem/1881/A
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
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int ans = -1;

        for (int i = 0; i <= 6; i++)
        {
            if (x.find(s) != string::npos)
            {
                ans = i;
                break;
            }
            x += x;
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