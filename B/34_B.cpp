/*
B. Sale
https://codeforces.com/problemset/problem/34/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
        {
            ans += abs(a[i]);
        }
        else
        {
            break;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}