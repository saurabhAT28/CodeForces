/*
A. Team Olympiad
https://codeforces.com/problemset/problem/490/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> a[4];

    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        a[t].push_back(i);
    }

    int w = min({(int)a[1].size(), (int)a[2].size(), (int)a[3].size()});

    cout << w << '\n';

    for (int i = 0; i < w; i++)
    {
        cout << a[1][i] << ' '
             << a[2][i] << ' '
             << a[3][i] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}