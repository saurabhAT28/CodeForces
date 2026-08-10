/*
A. Ambitious Kid
https://codeforces.com/problemset/problem/1866/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans = min(ans, abs(x));
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}