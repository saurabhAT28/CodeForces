// Problem 158A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int a[n];

    k--;

    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>=a[k] && a[i]>0)
            count++;
    }

    cout<<count;
    return 0;
}