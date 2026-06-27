/*
The New Year: Meeting Friends
https://codeforces.com/problemset/problem/723/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void printVector(vector<int>v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,z;
    cin>>x>>y>>z;

    cout<<min({abs(x-y)+abs(x-z),abs(y-x)+abs(y-z),abs(z-y)+abs(x-z)});
    

    return 0;
}


