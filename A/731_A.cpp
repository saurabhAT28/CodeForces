/*
A. Night at the Museum
https://codeforces.com/problemset/problem/731/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string s;
    cin >> s;

    char current = 'a';
    int rotations = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int distance = abs(s[i] - current);
        rotations += min(distance, 26 - distance);
        current = s[i];
    }

    cout << rotations << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}