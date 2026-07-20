/*
A. Vasya the Hipster
https://codeforces.com/problemset/problem/581/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int a,b;
    cin>>a>>b;

    cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}