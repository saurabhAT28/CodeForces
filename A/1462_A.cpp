/*
A. Favorite Sequence
https://codeforces.com/problemset/problem/1462/A
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

        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int l = 0, r = n - 1;

        while (l <= r)
        {
            cout << b[l] << " ";
            l++;

            if (l <= r)
            {
                cout << b[r] << " ";
                r--;
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