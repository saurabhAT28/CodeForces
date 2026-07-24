/*
A. Halloumi Boxes
https://codeforces.com/problemset/problem/1903/A
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
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (k >= 2)
        {
            cout << "YES\n";
        }
        else
        {
            bool sorted = true;
            for (int i = 1; i < n; i++)
            {
                if (a[i] < a[i - 1])
                {
                    sorted = false;
                    break;
                }
            }
            cout << (sorted ? "YES" : "NO") << "\n";
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