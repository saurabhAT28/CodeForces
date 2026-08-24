/*
A. Panoramix's Prediction
https://codeforces.com/problemset/problem/80/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, m;
    cin >> n >> m;

    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    for (int i = 0; i < 15; i++)
    {
        if (primes[i] == n)
        {
            cout << (primes[i + 1] == m ? "YES" : "NO");
            break;
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