/*
A. I Wanna Be the Guy
https://codeforces.com/problemset/problem/469/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n,p,q;
    int arr[200];

    cin>>n>>p;
    for(int i=0;i<p;i++)
        cin>>arr[i];
    
    cin>>q;
    for(int i=p;i<p+q;i++)
        cin>>arr[i];
    
    sort(arr,arr+p+q);

    int cnt=0;
    for(int i=0;i<p+q;i++){
        if(arr[i]!=arr[i+1])
            cnt++;
    }

    if(cnt==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}