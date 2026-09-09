/*
A. Bachgold Problem
https://codeforces.com/problemset/problem/749/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    cout << n / 2 << '\n';

    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << 2 << " ";
        }

        cout << 3;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}