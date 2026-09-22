/*
D. Falling Concrete
https://codeforces.com/problemset/problem/2266/D
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
        vector<long long> c(n);
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            c[i] = a - (i + 1);
        }

        sort(c.begin(), c.end());

        c.erase(unique(c.begin(), c.end()), c.end());

        int best = 1, cur = 1;
        for (size_t i = 1; i < c.size(); i++)
        {
            if (c[i] == c[i - 1] + 1)
                cur++;
            else
                cur = 1;
            best = max(best, cur);
        }
        cout << best << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}