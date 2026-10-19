/*
A. Choosing Teams
https://codeforces.com/problemset/problem/432/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    int eligible = 0;

    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;

        if (y + k <= 5)
        {
            eligible++;
        }
    }

    cout << eligible / 3 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}