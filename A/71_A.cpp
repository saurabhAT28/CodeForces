/*
A. Way Too Long Words
https://codeforces.com/problemset/problem/71/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string str;
    cin >> str;

    int n = str.length();

    if (n > 10)
    {
        cout << str[0] << n - 2 << str[n - 1] << "\n";
    }
    else
    {
        cout << str << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}