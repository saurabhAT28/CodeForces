/*
A. Even Odds
https://codeforces.com/problemset/problem/318/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void evenOdds()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    evenOdds();

    return 0;
}