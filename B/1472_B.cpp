/*
B. Fair Division
https://codeforces.com/problemset/problem/1472/B
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

        int ones = 0, twos = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 1)
                ones++;
            else
                twos++;
        }

        if (ones % 2 == 1)
        {
            cout << "NO\n";
        }
        else if (ones == 0 && twos % 2 == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}