/*
A. YES or YES?
https://codeforces.com/problemset/problem/1703/A
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
        bool ok = true;
        string target = "YES";
        for (int i = 0; i < 3; i++)
        {
            if (toupper(s[i]) != target[i])
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}