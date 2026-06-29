/*
B. Taxi
https://codeforces.com/problemset/problem/158/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    int cnt[5] = {0};
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        cnt[s]++;
    }

    int taxis = 0;

    taxis += cnt[4];

    taxis += cnt[3];
    int leftover1 = max(0, cnt[1] - cnt[3]); 

    taxis += cnt[2] / 2;
    int leftover2 = cnt[2] % 2; 

    if (leftover2)
    {
        taxis += 1;
        leftover1 = max(0, leftover1 - 2);
    }

    taxis += (leftover1 + 3) / 4;

    cout << taxis << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}