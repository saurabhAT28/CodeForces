/*
B. Xenia and Ringroad
https://codeforces.com/problemset/problem/339/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;
    long long cur = 1, total = 0;
    for (int i = 0; i < m; i++)
    {
        long long a;
        cin >> a;
        long long diff = ((a - cur) % n + n) % n;
        total += diff;
        cur = a;
    }
    cout << total << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}