/*
A. Vanya and Fence
https://codeforces.com/problemset/problem/677/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int vanyaAndFence(int n, int h)
{
    int a;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > h)
            ans++;
        ans++;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h;
    cin >> n >> h;

    cout << vanyaAndFence(n, h);

    return 0;
}