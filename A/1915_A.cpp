/*
A. Odd One Out
https://codeforces.com/problemset/problem/1915/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{   
    int t;
    cin>>t;

    while(t--){
        int a,b,c;

        cin>>a>>b>>c;

        int ans = a^b^c;

        cout<<ans<<"\n";

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}