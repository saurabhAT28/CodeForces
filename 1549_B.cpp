/*
https://codeforces.com/problemset/problem/1549/B
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        string zero,first;

        cin>>first;
        cin>>zero;

        ll count=0;
        for(int i=0;i<n;i++){
            if(zero[i]=='1' && first[i]=='0'){
                count++;
            }
            else if(zero[i]=='1' && first[i]=='1'){
                if(i-1>=0 && first[i-1]=='1'){
                    count++;
                    first[i-1]='0';
                }
                else if(i+1<n && first[i+1]=='1'){
                    count++;
                    first[i+1]='0';
                }
            }
        }
        cout<<count<<"\n";
    }

    return 0;
}

/*
4
3
000
111
4
1111
1111
3
010
010
5
11001
00000
*/