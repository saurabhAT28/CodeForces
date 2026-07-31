/*
A. Game With Sticks
https://codeforces.com/problemset/problem/451/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
 int n, m;
    cin >> n >> m;
    int k = min(n, m);
    cout << (k % 2 == 1 ? "Akshat" : "Malvika") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}