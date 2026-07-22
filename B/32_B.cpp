/*
B. Borze
https://codeforces.com/problemset/problem/32/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string str;
    cin>>str;

    int n=str.length();

    for(int i=0;i<n;i++){
        if(str[i]=='.'){
            cout<<0;
        }
        else if(str[i]=='-'){
            if(i+1<n && str[i+1]=='.'){
                cout<<1;
                i++;
            }
            else if(i+1<n && str[i+1]=='-'){
                cout<<2;
                i++;
            }
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