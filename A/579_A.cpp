/*
A. Raising Bacteria
https://codeforces.com/problemset/problem/579/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int x;
    cin >> x;

    int ans = 0;

    while (x > 0)
    {
        ans += x % 2;
        x /= 2;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}