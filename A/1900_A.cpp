/*
A. Cover in Water
https://codeforces.com/problemset/problem/1900/A
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

        int dots = 0;
        int consecutive = 0;
        bool largeSegment = false;

        for (char c : s)
        {
            if (c == '.')
            {
                dots++;
                consecutive++;

                if (consecutive >= 3)
                {
                    largeSegment = true;
                }
            }
            else
            {
                consecutive = 0;
            }
        }

        if (largeSegment)
            cout << 2 << '\n';
        else
            cout << dots << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}