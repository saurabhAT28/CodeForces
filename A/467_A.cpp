/*
A. George and Accommodation
https://codeforces.com/problemset/problem/467/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int georgeAndAccommodation(int n)
{   
    int a,b;
    int ans=0;

    while(n--){
        cin>>a>>b;

        if(b-a>=2)
            ans++;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    cout<<georgeAndAccommodation(n);



    return 0;
}