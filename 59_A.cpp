/*
A. Word
https://codeforces.com/problemset/problem/59/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string word(string str)
{
    int n = str.length();
    int upper = 0, lower = 0;

    for (int i = 0; i < n; i++)
    {
        if (isupper(str[i]))
            upper++;
        else
            lower++;
    }

    if (upper > lower)
    {
        for (int i = 0; i < n; i++)
        {
            str[i] = toupper(str[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            str[i] = tolower(str[i]);
        }
    }

    return str;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    cin >> str;

    cout << word(str);

    return 0;
}
