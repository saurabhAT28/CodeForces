/*
B. Swap and Delete
https://codeforces.com/problemset/problem/1913/B
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

        int len = s.size();
        int zeros = count(s.begin(), s.end(), '0');
        int ones = len - zeros;

        int i = 0;

        while (i < len)
        {
            if (s[i] == '0')
            {
                if (ones == 0)
                    break;
                ones--;
            }
            else
            {
                if (zeros == 0)
                    break;
                zeros--;
            }
            i++;
        }

        cout << len - i << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}