/*
A. Calculating Function
https://codeforces.com/problemset/problem/486/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a;
    cin>>a;

    if(a%2==0)
        cout<<a/2;
    else
        cout<<-(a/2+1);

    return 0;
}