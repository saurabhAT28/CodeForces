/*
A. Die Roll
https://codeforces.com/problemset/problem/9/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
int Y, W;
    cin >> Y >> W;

    int mx = max(Y, W);
    int favorable = 7 - mx; // outcomes from mx to 6

    int g = __gcd(favorable, 6);

    cout << favorable / g << "/" << 6 / g << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}