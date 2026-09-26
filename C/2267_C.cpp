/*
C. GCD Treasury
https://codeforces.com/contest/2267/problem/C
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin >> t;

    while (t--){
        int n,x;
        cin >> n>>x;

        vector<int>v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int primes[8]; int m=0;
        int xx=x;
        for(int p=2; (ll)p*p<=xx; p++){
            if(xx%p==0){
                primes[m++]=p;
                while(xx%p==0) xx/=p;
            }
        }
        if(xx>1) primes[m++]=xx;

        if(m==0){
            cout<<"0\n";
            continue;
        }
        int full = 1<<m;
        ll sum[64];
        for(int i=0;i<full;i++) sum[i]=0;

        for(int i=0;i<n;i++){
            int mask=0;
            int a=v[i];
            for(int j=0;j<m;j++) if(a%primes[j]==0) mask|=(1<<j);
            sum[mask]+=a;
        }

        ll ans=0;
        for(int S=1;S<full;S++){
            ll total=0;
            int andAll = full-1;
            bool found=false;
            for(int v=0;v<full;v++){
                if(!sum[v]) continue;
                if((v&S)==S){
                    total+=sum[v];
                    andAll&=v;
                    found=true;
                }
            }
            if(found && andAll==S) ans=max(ans,total);
        }
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
