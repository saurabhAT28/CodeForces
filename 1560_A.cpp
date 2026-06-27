/*
A. Dislike of Threes
https://codeforces.com/problemset/problem/1560/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    vector<int> v;
    for (int i = 1; i <= 1666; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
            v.push_back(i);
    }

    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cout << v[k - 1] << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}