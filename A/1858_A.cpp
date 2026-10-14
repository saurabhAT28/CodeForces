/*
A. Buttons
https://codeforces.com/problemset/problem/1858/A
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
        ll a, b, c;
        cin >> a >> b >> c;

        if (a > b)
        {
            cout << "First\n";
        }
        else if (a < b)
        {
            cout << "Second\n";
        }
        else
        {
            cout << (c % 2 ? "First\n" : "Second\n");
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