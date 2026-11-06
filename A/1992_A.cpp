/*
A. Only Pluses
https://codeforces.com/problemset/problem/1992/A
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
        int a, b, c;
        cin >> a >> b >> c;

        for (int i = 0; i < 5; i++)
        {
            if (a <= b && a <= c)
            {
                a++;
            }
            else if (b <= a && b <= c)
            {
                b++;
            }
            else
            {
                c++;
            }
        }

        cout << a * b * c << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}