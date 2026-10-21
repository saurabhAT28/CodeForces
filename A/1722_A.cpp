/*
A. Spell Check
https://codeforces.com/problemset/problem/1722/A
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
        string s;
        cin >> n >> s;

        string target = "Timur";
        sort(s.begin(), s.end());
        sort(target.begin(), target.end());

        if (n == 5 && s == target)
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