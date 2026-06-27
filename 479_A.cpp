/*
A. Expression
https://codeforces.com/problemset/problem/479/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int a, b, c, ans;
    cin >> a >> b >> c;

    ans = max(a + b + c, a * b * c);
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    ans = max(ans, a + (b * c));
    ans = max(ans, (a * b) + c);

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}