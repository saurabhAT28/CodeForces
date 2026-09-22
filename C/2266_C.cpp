/*
C. AND, OR, Sort!
https://codeforces.com/problemset/problem/2266/C
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
        string s;
        cin >> n >> s;

        int totalZeros = count(s.begin(), s.end(), '0');

        if (s[0] == '1')
        {
            cout << totalZeros << '\n';
            continue;
        }

        int i = 0;
        while (i < n && s[i] == '0')
            i++;

        int onesPre = 0, zerosPre = 0;
        int best = INT_MAX;

        for (int k = 1; k <= n; k++)
        {
            if (s[k - 1] == '1')
                onesPre++;
            else
                zerosPre++;
            if (k >= i)
            {
                best = min(best, onesPre + (totalZeros - zerosPre));
            }
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