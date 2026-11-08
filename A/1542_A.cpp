/*
A. Odd Set
https://codeforces.com/problemset/problem/1542/A
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
        int n;
        cin >> n;

        int even = 0, odd = 0;

        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;

            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == n && odd == n)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}