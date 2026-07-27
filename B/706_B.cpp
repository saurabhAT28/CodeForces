/*
B. Interesting drink
https://codeforces.com/problemset/problem/706/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;

    while (q--)
    {
        int m;
        cin >> m;
        cout << upper_bound(prices.begin(), prices.end(), m) - prices.begin() << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}