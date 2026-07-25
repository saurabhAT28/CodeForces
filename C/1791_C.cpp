/*
C. Prepend and Append
https://codeforces.com/problemset/problem/1791/C
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

        string s;
        cin >> s;

        int left = 0, right = n - 1;

        while (left < right && s[left] != s[right])
        {
            left++;
            right--;
        }

        if (left > right)
            cout << 0 << endl;
        else
            cout << right - left + 1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}