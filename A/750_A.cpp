/*
A. New Year and Hurry
https://codeforces.com/problemset/problem/750/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;

    int total = 240 - k;
    int time = 0, count = 0;
    
    for (int i = 1; i <= n; i++)
    {
        time += 5 * i;
        if (time <= total)
            count++;
        else
            break;
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