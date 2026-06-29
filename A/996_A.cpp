/*
A. Hit the Lottery
https://codeforces.com/problemset/problem/996/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    int bills[5] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (n == 0)
            break;
        count += n / bills[i];
        n %= bills[i];
    }

    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}