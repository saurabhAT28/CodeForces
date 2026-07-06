/*
A. I_love_%username%
https://codeforces.com/problemset/problem/155/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    int score;
    cin >> score;

    int mx = score;
    int mn = score;
    int ans = 0;

    for (int i = 1; i < n; i++)
    {
        cin >> score;

        if (score > mx)
        {
            ans++;
            mx = score;
        }
        else if (score < mn)
        {
            ans++;
            mn = score;
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}