/*
B. Sequence Game
https://codeforces.com/problemset/problem/1862/B
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
        cin >> n;

        vector<long long> b(n);
        for (auto &x : b)
            cin >> x;

        vector<long long> a;
        a.push_back(b[0]);

        for (int i = 1; i < n; i++)
        {
            if (b[i - 1] > b[i])
            {
                a.push_back(1);
            }

            a.push_back(b[i]);
        }

        cout << a.size() << '\n';

        for (auto x : a)
        {
            cout << x << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}