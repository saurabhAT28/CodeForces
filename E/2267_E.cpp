/*
E. Clean Substrings

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
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        ll cnt0 = 0, cnt1 = 0;

        for (char c : s)
        {
            if (c == '0')
                cnt0++;
            else
                cnt1++;
        }

        ll trans = 0;

        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] != s[i])
            {
                trans += 1LL * i * (n - i);
            }
        }

        auto get_answer = [&]() -> ll
        {
            return (trans + cnt0 * cnt1) / 2;
        };

        cout << get_answer();

        while (q--)
        {
            int k;
            cin >> k;

            if (k > 1 && s[k - 2] != s[k - 1])
            {
                trans -= 1LL * (k - 1) * (n - (k - 1));
            }

            if (k < n && s[k - 1] != s[k])
            {
                trans -= 1LL * k * (n - k);
            }

            if (s[k - 1] == '0')
            {
                cnt0--;
                cnt1++;
                s[k - 1] = '1';
            }
            else
            {
                cnt1--;
                cnt0++;
                s[k - 1] = '0';
            }

            if (k > 1 && s[k - 2] != s[k - 1])
            {
                trans += 1LL * (k - 1) * (n - (k - 1));
            }

            if (k < n && s[k - 1] != s[k])
            {
                trans += 1LL * k * (n - k);
            }

            cout << ' ' << get_answer();
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