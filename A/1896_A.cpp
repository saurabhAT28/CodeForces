/*
A. Jagged Swaps
https://codeforces.com/problemset/problem/1896/A
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

        cout << (a[0] == 1 ? "YES" : "NO") << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}