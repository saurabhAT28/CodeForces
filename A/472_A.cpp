/*
A. Design Tutorial: Learn from Math
https://codeforces.com/problemset/problem/472/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << 4 << " " << n - 4 << '\n';
    } else {
        cout << 9 << " " << n - 9 << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}