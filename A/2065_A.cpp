/*
A. Skibidus and Amog'u
https://codeforces.com/problemset/problem/2065/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        int n= str.size();

        for (int i = 0; i < n - 2; i++)
            cout << str[i];

        cout << 'i' << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}