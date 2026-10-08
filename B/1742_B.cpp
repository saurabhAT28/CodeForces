/*
B. Increasing
https://codeforces.com/problemset/problem/1742/B
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

        for (int &x : a)
        {
            cin >> x;
        }

        sort(a.begin(), a.end());

        bool possible = true;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}