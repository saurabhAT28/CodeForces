/*
B. Vanya and Lanterns
https://codeforces.com/problemset/problem/492/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
int n;
    ll l;
    cin >> n >> l;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double d = max((double)a[0], (double)(l - a[n - 1]));
    for (int i = 0; i + 1 < n; i++) {
        double gap = (a[i + 1] - a[i]) / 2.0;
        d = max(d, gap);
    }

    cout.precision(10);
    cout << fixed << d << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}