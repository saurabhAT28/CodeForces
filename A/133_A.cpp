/*
A. HQ9+
https://codeforces.com/problemset/problem/133/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string str;
    cin >> str;
    int length = str.length();

    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}