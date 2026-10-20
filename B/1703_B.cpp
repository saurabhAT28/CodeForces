/*
B. ICPC Balloons
https://codeforces.com/problemset/problem/1703/B
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
        int n;
        string s;
        cin >> n >> s;

        vector<bool> solved(26, false);
        int balloons = 0;

        for (char c : s)
        {
            int idx = c - 'A';

            balloons++;

            if (!solved[idx])
            {
                balloons++;
                solved[idx] = true;
            }
        }

        cout << balloons << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}