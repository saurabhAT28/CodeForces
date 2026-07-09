/*
B. New Year's Eve
https://codeforces.com/problemset/problem/912/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if(k == 1){
        cout << n << endl;
    } else {
        ll m = 0;
        while((1LL << m) <= n) m++;
        cout << ((1LL << m) - 1) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}