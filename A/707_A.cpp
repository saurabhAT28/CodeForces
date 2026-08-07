/*
A. Brain's Photos
https://codeforces.com/problemset/problem/707/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;

    char c;

    bool flag = true;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y')
            {
                flag = false;
            }
        }
    }

    cout << (flag ? "#Black&White" : "#Color") << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}