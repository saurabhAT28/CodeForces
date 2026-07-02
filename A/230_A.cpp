/*
A. Dragons
https://codeforces.com/problemset/problem/230/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll s, n;
    cin >> s >> n;
    vector<pair<ll, ll>> dragons(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }
    sort(dragons.begin(), dragons.end());

    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (s > dragons[i].first)
        {
            s += dragons[i].second;
        }
        else
        {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}