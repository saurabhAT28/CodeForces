
/*
A. Petya and Strings
https://codeforces.com/problemset/problem/112/A
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

    string s1,s2;
    cin>>s1>>s2;

    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);

    if(s1>s2)
        cout<<1;
    else if(s1<s2)
        cout<<-1;
    else 
        cout<<0;

    return 0;
}












