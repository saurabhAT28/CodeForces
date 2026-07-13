/*
A. Division?
https://codeforces.com/problemset/problem/1669/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin>>t;

    while(t--){
        int rating;
        cin>>rating;

        if(rating >= 1900){
            cout<<"Division 1\n";
        }
        else if(rating >= 1600){
            cout<<"Division 2\n";
        }
        else if(rating >= 1400){
            cout<<"Division 3\n";
        }
        else{
            cout<<"Division 4\n";
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