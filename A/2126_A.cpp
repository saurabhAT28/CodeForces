/*
A. Only One Digit
https://codeforces.com/problemset/problem/2126/A
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

        int ans = 9;

        while (n > 0)
        {
            int digit = n % 10;

            if (digit < ans)
            {
                ans = digit;
            }

            n /= 10;
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