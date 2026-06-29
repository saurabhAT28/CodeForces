/*
B. Queue at the School
https://codeforces.com/problemset/problem/266/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n,t;
    string s;
    cin >> n >> t;
    cin>>s;

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout<<s<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}