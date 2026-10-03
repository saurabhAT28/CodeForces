/*
A. Short Substrings
https://codeforces.com/problemset/problem/1367/A
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
        string s;
        cin >> s;

        string ans;

        for (int i = 0; i < s.size(); i += 2)
        {
            ans += s[i];
        }

        if (s.size() % 2 == 0)
        {
            ans += s.back();
        }

        cout << ans << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}