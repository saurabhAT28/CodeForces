#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int m=INT_MIN;
        int x;
        double sum=0;

        for(int i=0;i<n;i++){
            cin>>x;
            m=max(m,x);
            sum+=x;
        }

        sum-=m;
        
        // cout<<"sum: "<<sum<<"\n";
        // cout<<"m: "<<m<<"\n";

        double ans=m+(sum/(n-1));

        cout<<setprecision(10)<<ans<<"\n";

    }

    return 0;
}


