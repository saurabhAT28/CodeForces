/*
A. Watermelon
https://codeforces.com/problemset/problem/4/A
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n&1 || n<=2){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}