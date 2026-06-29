/*
A. Kefa and First Steps
https://codeforces.com/problemset/problem/580/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, x;
    int temp = -1;
    int count = 0;
    int maxCount = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= temp)
        {
            count++;
            temp = x;
        }
        else
        {
            if (count > maxCount)
                maxCount = count;
            count = 1;
            temp = x;
        }
    }
    if (count > maxCount)
        maxCount = count;
    cout << maxCount << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}