/*
A. Twins
https://codeforces.com/problemset/problem/160/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int twins(int arr[], int n, int sum)
{
    sort(arr, arr + n);

    int cur = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        cur += arr[i];
        ans++;
        if (cur > sum)
            break;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int sum = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << twins(arr, n, sum/2);

    return 0;
}