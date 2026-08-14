/*
B. Good Kid
https://codeforces.com/problemset/problem/1873/B
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

        long long product = 1;
        int minimum = 10;
        int zeroCount = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            minimum = min(minimum, x);

            if (x == 0)
            {
                zeroCount++;
            }
            else
            {
                product *= x;
            }
        }

        long long answer;

        if (zeroCount >= 2)
        {
            // At least one zero will always remain.
            answer = 0;
        }
        else if (zeroCount == 1)
        {
            // Change the only zero to 1.
            answer = product;
        }
        else
        {
            // No zero: increase the smallest digit.
            answer = (product / minimum) * (minimum + 1);
        }

        cout << answer << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}