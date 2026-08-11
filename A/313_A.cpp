/*
A. Ilya and Bank Account
https://codeforces.com/problemset/problem/313/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    long long n;
    cin >> n;
    if (n >= 0)
    {
        cout << n;
        return;
    }
    
    long long a = n / 10;                  // remove last digit
    long long b = (n / 100) * 10 + n % 10; // remove second-last digit
    cout << max(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}