/*
A. Beautiful Year
https://codeforces.com/problemset/problem/271/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int beautifulYear(int year)
{   
    int a,b,c,d;
    while(1){
        year++;
        a=year/1000;
        b=year/100%10;
        c=year/10%10;
        d=year%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
    }
    return year;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int year;
    cin>>year;

    cout<<beautifulYear(year);

    return 0;
}