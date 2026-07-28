/*
A. How Much Does Daytona Cost?
https://codeforces.com/problemset/problem/1878/A
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

        bool found = false;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x == k)
                found = true;
        }

        cout << (found ? "YES" : "NO") << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}