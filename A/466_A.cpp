/*
A. Cheap Travel
https://codeforces.com/problemset/problem/466/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ans = min({n * a, (n / m) * b + (n % m) * a, ((n + m - 1) / m) * b});
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}