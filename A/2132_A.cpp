/*
A. Homework
https://codeforces.com/problemset/problem/2132
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
        int n, m;
        string a, b, c;

        cin >> n >> a;
        cin >> m >> b >> c;

        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'V')
            {
                a = b[i] + a;
            }
            else
            {
                a += b[i];
            }
        }

        cout << a << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}