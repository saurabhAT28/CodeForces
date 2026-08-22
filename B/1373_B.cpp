/*
B. 01 Game
https://codeforces.com/problemset/problem/1373/B
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

        int zero = count(s.begin(), s.end(), '0');
        int one = s.size() - zero;

        int moves = min(zero, one);

        if (moves % 2 == 1)
            cout << "DA\n";
        else
            cout << "NET\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}