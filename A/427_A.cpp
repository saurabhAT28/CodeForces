/*
A. Police Recruits
https://codeforces.com/problemset/problem/427/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, x;
    int ans = 0;
    int curPolice = 0;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x == -1)
        {
            if (curPolice > 0)
                curPolice--;
            else
                ans++;
        }
        else
        {
            curPolice += x;
        }
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}