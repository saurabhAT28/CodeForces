/*
A. Keyboard
https://codeforces.com/problemset/problem/474/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    char direction;
    string s;

    cin >> direction;
    cin >> s;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (char c : s)
    {
        int pos = keyboard.find(c);

        if (direction == 'R')
        {
            cout << keyboard[pos - 1];
        }
        else
        {
            cout << keyboard[pos + 1];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}