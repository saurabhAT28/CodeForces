/*
B. Two Arrays And Swaps
https://codeforces.com/problemset/problem/1353/B
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

        vector<int> a(n), b(n);

        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        for (int i = 0; i < k; i++)
        {
            if (b[i] > a[i])
                swap(a[i], b[i]);
            else
                break;
        }

        int sum = accumulate(a.begin(), a.end(), 0);

        cout << sum << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}