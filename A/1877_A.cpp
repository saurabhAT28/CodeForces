/*
A. Goals of Victory
https://codeforces.com/problemset/problem/1877/A
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

        int sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        cout << -sum << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}