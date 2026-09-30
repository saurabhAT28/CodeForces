/*
A. Desorting
https://codeforces.com/problemset/problem/1853/A
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

        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int ans = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            int diff = a[i + 1] - a[i];

            if (diff < 0)
            {
                ans = 0;
                break;
            }

            ans = min(ans, diff / 2 + 1);
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