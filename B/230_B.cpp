/*
B. T-primes
https://codeforces.com/problemset/problem/230/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    const int MAXN = 1000001;
    vector<bool> isComposite(MAXN, false);
    for (int i = 2; (ll)i * i < MAXN; i++)
    {
        if (!isComposite[i])
        {
            for (ll j = (ll)i * i; j < MAXN; j += i)
            {
                isComposite[j] = true;
            }
        }
    }

    int n;
    cin >> n;
    vector<ll> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];

    for (int i = 0; i < n; i++)
    {
        ll val = x[i];
        ll root = (ll)sqrtl((long double)val);

        // adjust for floating point errors
        while (root * root > val)
            root--;
        while ((root + 1) * (root + 1) <= val)
            root++;

        bool isTPrime = false;
        if (root * root == val && root >= 2 && root < MAXN)
        {
            isTPrime = !isComposite[root];
        }

        cout << (isTPrime ? "YES" : "NO") << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}