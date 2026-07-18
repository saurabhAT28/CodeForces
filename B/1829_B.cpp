/*
B. Blank Space
https://codeforces.com/problemset/problem/1829/B
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maxLen = 0, cur = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cur++;
                maxLen = max(maxLen, cur);
            }
            else
            {
                cur = 0;
            }
        }
        cout << maxLen << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}