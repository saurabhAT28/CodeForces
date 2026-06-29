/*
A. Stones on the Table
https://codeforces.com/problemset/problem/266/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int stonesOnTheTable(int n, string str)
{

    if (n == 1)
    {
        return 0;
    }

    int i = 0, j = 1;
    int cnt = 0;

    while (j != n)
    {
        if (str[i] == str[j])
        {
            cnt++;
            j++;
        }
        else
        {
            i=j;
            j++;
        }
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;

    cin >> n>>str;
    

    cout << stonesOnTheTable(n, str);

    return 0;
}
