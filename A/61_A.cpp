/*
A. Ultra-Fast Mathematician
https://codeforces.com/problemset/problem/61/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void ultraFastMathematician()
{
    string s1, s2;

    cin >> s1 >> s2;

    int n = s1.length();
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
            ans += '0';
        else
            ans += '1';
    }

    cout << ans;

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ultraFastMathematician();

    return 0;
}