/*
A. A+B Again?
https://codeforces.com/problemset/problem/1999/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t,n,sum;
    cin >> t;

    while(t--){
        sum=0;
        cin >> n;

        while(n){
            sum+=n%10;
            n/=10;
        }
        cout << sum << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}