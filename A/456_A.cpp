/*
A. Laptops
https://codeforces.com/problemset/problem/456/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> laptops(n);

    for (int i = 0; i < n; i++)
    {
        cin >> laptops[i].first >> laptops[i].second;
    }

    sort(laptops.begin(), laptops.end());

    for (int i = 1; i < n; i++)
    {
        if (laptops[i].second < laptops[i - 1].second)
        {
            cout << "Happy Alex\n";
            return;
        }
    }

    cout << "Poor Alex\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}