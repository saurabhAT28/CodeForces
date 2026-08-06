/*
B. Make AP
https://codeforces.com/problemset/problem/1624/B
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
        long long a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        // Change a
        long long na = 2 * b - c;
        if (na > 0 && na % a == 0)
            ok = true;

        // Change b
        long long nb = a + c;
        if (!ok && nb % 2 == 0)
        {
            nb /= 2;
            if (nb > 0 && nb % b == 0)
                ok = true;
        }

        // Change c
        long long nc = 2 * b - a;
        if (!ok && nc > 0 && nc % c == 0)
            ok = true;

        cout << (ok ? "YES" : "NO") << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}