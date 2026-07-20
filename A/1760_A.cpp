/*
A. Medium Number
https://codeforces.com/problemset/problem/1760/A
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
        int a, b, c;
        cin >> a >> b >> c;

        int medium = a;

        if ((a <= b && b <= c) || (c <= b && b <= a))
        {
            medium = b;
        }
        else if ((b <= c && c <= a) || (a <= c && c <= b))
        {
            medium = c;
        }

        cout << medium << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}