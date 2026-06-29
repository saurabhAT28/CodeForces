/*
A. Lucky Division
https://codeforces.com/problemset/problem/122/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string luckyDivision(int n)
{

    int arr[12] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 777, 774, 744};

    for (int i = 0; i < 12; i++)
    {
        if (n % arr[i] == 0)
            return "YES";
    }

    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << luckyDivision(n);

    return 0;
}