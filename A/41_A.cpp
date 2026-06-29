/*
A. Translate
https://codeforces.com/problemset/problem/41/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string translate(string s, string t)
{
    int n = s.length();
    int m = t.length();

    if (n != m)
        return "NO";

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[n - 1 - i])
        {
            return "NO";
        }
    }

    return "YES";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;

    cin >> s >> t;

    cout << translate(s, t);

    return 0;
}
