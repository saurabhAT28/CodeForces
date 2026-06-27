/*
B. Drinks
https://codeforces.com/problemset/problem/200/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void drinks()
{

    int n;
    cin >> n;

    int arr[n];
    double ans = 0.0, sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    ans = sum / n;

    cout << fixed << setprecision(12) << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    drinks();

    return 0;
}