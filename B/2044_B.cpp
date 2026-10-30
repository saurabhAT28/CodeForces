/*
B. Normal Problem
https://codeforces.com/problemset/problem/2044/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        reverse(s.begin(), s.end());

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'p') {
                s[i] = 'q';
            } else if (s[i] == 'q') {
                s[i] = 'p';
            }
        }

        cout << s << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}