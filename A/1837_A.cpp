/*
A. Grasshopper on a Line
https://codeforces.com/problemset/problem/1837/A
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
        int x, k;
        cin >> x >> k;

        if (x % k != 0)
        {
            // One move is enough
            cout << 1 << '\n';
            cout << x << '\n';
        }
        else
        {
            // x is divisible by k, so use (x - 1) + 1
            cout << 2 << '\n';
            cout << x - 1 << ' ' << 1 << '\n';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}