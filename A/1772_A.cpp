/*
A. A+B?
https://codeforces.com/problemset/problem/1772/A
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
        string s;
        cin >> s;

        int a = s[0] - '0';
        int b = s[2] - '0';

        cout << a + b << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}