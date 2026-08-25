/*
B. Maximum Multiple Sum
https://codeforces.com/problemset/problem/1985/B
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

        int bestX = 2;
        int maxSum = 0;

        for (int x = 2; x <= n; x++)
        {
            int k = n / x;
            int sum = x * k * (k + 1) / 2;

            if (sum > maxSum)
            {
                maxSum = sum;
                bestX = x;
            }
        }

        cout << bestX << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}