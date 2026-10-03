/*
A. United We Stand
https://codeforces.com/problemset/problem/1859/A
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

        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int mn = *min_element(a.begin(), a.end());

        vector<int> b, c;

        for (int x : a)
        {
            if (x == mn)
                b.push_back(x);
            else
                c.push_back(x);
        }

        if (c.empty())
        {
            cout << -1 << '\n';
            continue;
        }

        cout << b.size() << ' ' << c.size() << '\n';

        for (int x : b)
            cout << x << ' ';
        cout << '\n';

        for (int x : c)
            cout << x << ' ';
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