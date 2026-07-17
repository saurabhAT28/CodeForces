/*
A. Spy Detected!
https://codeforces.com/problemset/problem/1512/A
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

        int common;
        if (a[0] == a[1] || a[0] == a[2])
        {
            common = a[0];
        }
        else
        {
            common = a[1];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] != common)
            {
                cout << i + 1 << "\n";
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