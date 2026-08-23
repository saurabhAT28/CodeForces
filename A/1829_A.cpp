/*
A. Love Story
https://codeforces.com/problemset/problem/1829/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin >> t;

    string target = "codeforces";

    while (t--)
    {
        string s;
        cin >> s;

        int count = 0;

        for (int i = 0; i < 10; i++)
        {
            if (s[i] != target[i])
            {
                count++;
            }
        }

        cout << count << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}