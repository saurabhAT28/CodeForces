/*
A. Magnets
https://codeforces.com/problemset/problem/344/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int magnets(int n)
{
    int ans = 1;
    string str;

    cin >> str;

    char last = str[1];

    for (int i = 1; i < n; i++)
    {
        cin >> str;
        if (str[0] == last)
        {
            ans++;
        }
        last = str[1];
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << magnets(n);

    return 0;
}