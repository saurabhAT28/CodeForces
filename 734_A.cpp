/*
A. Anton and Danik
https://codeforces.com/problemset/problem/734/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string antonandDanik(int n, string str)
{
    int anton = 0, danik = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton == danik)
        return "Friendship";
    else if (danik > anton)
        return "Danik";
    return "Anton";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string str;

    cin >> n >> str;

    cout << antonandDanik(n, str);

    return 0;
}
