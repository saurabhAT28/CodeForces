/*
B. Colourblindness
https://codeforces.com/problemset/problem/1722/B
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

        char c;

        bool flag = true;

        string str1, str2;
        cin >> str1 >> str2;

        for (int i = 0; i < n; i++)
        {
            if (str1[i] != 'R')
            {
                str1[i] = 'X'; 
            }
            if (str2[i] != 'R')
            {
                str2[i] = 'X';
            }

            if (str1[i] != str2[i])
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}