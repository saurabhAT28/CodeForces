/*
A. Is your horseshoe on the other hoof?
https://codeforces.com/problemset/problem/228/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n = 4, c = 0;
    int arr[4];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            c++;
        }
    }

    cout << n - c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}