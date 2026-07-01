/*
A. Amusing Joke
https://codeforces.com/problemset/problem/141/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string a, b, c;
    cin >> a >> b >> c;
    string combined = a + b;
    sort(combined.begin(), combined.end());
    sort(c.begin(), c.end());
    cout << (combined == c ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}