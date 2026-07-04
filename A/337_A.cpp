/*
A. Puzzles
https://codeforces.com/problemset/problem/337/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int minDiff = INT_MAX;
    for (int i = 0; i + n - 1 < m; i++)
    {
        int diff = v[i + n - 1] - v[i];
        minDiff = min(minDiff, diff);
    }

    cout << minDiff << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}