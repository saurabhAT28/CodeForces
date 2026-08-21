/*
B. Chemistry
https://codeforces.com/problemset/problem/1883/B
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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int freq[26] = {};

        for (char c : s)
        {
            freq[c - 'a']++;
        }

        int odd = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                odd++;
            }
        }

        if (odd - 1 <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}