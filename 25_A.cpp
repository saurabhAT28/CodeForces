/*
A. IQ test
https://codeforces.com/problemset/problem/25/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n,x;
    int even=0,lastEven=0,lastOdd=0;

    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>x;
        if(x&1){
            even--;
            lastOdd=i;
        }
        else{
            even++;
            lastEven=i;
        }
    }

    if(even>0)
        cout<<lastOdd;
    else 
        cout<<lastEven;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}