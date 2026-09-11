/*
A. Vlad and the Best of Five
https://codeforces.com/problemset/problem/1926/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;
        int cnt=0;

        for(int i=0;i<5;i++){
            if(str[i]=='A'){
                cnt++;
            }
        }
        if(cnt>=3){
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}