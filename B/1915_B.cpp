/*
B. Not Quite Latin Square
https://codeforces.com/problemset/problem/1915/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s[3];

        for (int i = 0; i < 3; i++) {
            cin >> s[i];
        }

        for (int i = 0; i < 3; i++) {
            if (s[i].find('?') != string::npos) {
                for (char ch = 'A'; ch <= 'C'; ch++) {
                    if (s[i].find(ch) == string::npos) {
                        cout << ch << '\n';
                        break;
                    }
                }
                break;
            }
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