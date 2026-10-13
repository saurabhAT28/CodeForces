/*
A. Black Square
https://codeforces.com/problemset/problem/431/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int a[5];
    for (int i = 1; i <= 4; i++)
    {
        cin >> a[i];
    }

    string s;
    cin >> s;

    int total = 0;

    for (char c : s)
    {
        total += a[c - '0'];
    }

    cout << total << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}