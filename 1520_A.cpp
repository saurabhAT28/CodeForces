// Problem 1520A
// Do Not Distracted

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve(string s,int n){
    

    vector<int>v(26,0);
    v[s[0]-'A']=1;

    for(int i=1;i<n;i++){
        if(s[i]==s[i-1])
            continue;
        else{
            if(v[s[i]-'A']>0){
                cout<<"NO\n";
                return;
            }
            v[s[i]-'A']=1;
        }
    }
    cout<<"YES\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;

        solve(s,n);
    }

    return 0;
}