/*
B. Atilla's Favorite Problem
https://codeforces.com/problemset/problem/1760/B
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

        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans = max(ans, s[i] - 'a' + 1);
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