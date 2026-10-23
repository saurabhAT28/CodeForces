/*
D. Balanced Round
https://codeforces.com/problemset/problem/1850/D
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
        long long k;
        cin >> n >> k;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int curr = 1, longest = 1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
            {
                curr++;
            }
            else    
            {
                curr = 1;
            }

            longest = max(longest, curr);
        }

        cout << n - longest << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}