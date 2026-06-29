// Problem 231A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int problem=0;

    while(t--){
        int count=0;
        for(int i=0;i<3;i++){
            int n;
            cin>>n;
            if(n==1)
                count++;
        }
        if(count>=2)
            problem++;
    }

    cout<<problem;

    return 0;
}