/*
A. Mishka and Game
https://codeforces.com/problemset/problem/703/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    int mishka = 0, chris = 0;
    int m, c;

    while (n--)
    {
        cin >> m >> c;

        if (m > c)
            mishka++;
        else if (m < c)
            chris++;
    }

    if (mishka > chris)
        cout << "Mishka" << endl;
    else if (chris > mishka)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}