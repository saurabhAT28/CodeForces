/*
A. One and Two
https://codeforces.com/problemset/problem/1788/A
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

        int totalTwos = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                totalTwos++;
            }
        }

        // Odd number of 2s cannot be divided equally
        if (totalTwos % 2 != 0)
        {
            cout << -1 << '\n';
            continue;
        }

        int target = totalTwos / 2;
        int countTwos = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 2)
            {
                countTwos++;
            }

            if (countTwos == target)
            {
                cout << i + 1 << '\n';
                break;
            }
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