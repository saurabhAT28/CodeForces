/*
A. Football
https://codeforces.com/problemset/problem/96/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string football(string str)
{
    int n = str.length();
    int upper = 0, lower = 0;

    int cur=1;
    int k=0;
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1]){
            cur++;
        }
        else{
            cur=1;
        }

        if(cur==7)
            return "YES";
    }

    return "NO";
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    cin >> str;

    cout << football(str);

    return 0;
}
