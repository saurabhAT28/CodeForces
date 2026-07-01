/*
A. Dubstep
https://codeforces.com/problemset/problem/208/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string str, word = "";
    cin >> str;
    str += "WUB";

    for (int i = 0; i < str.size(); i++)
    {
        if (str.substr(i, 3) == "WUB")
        {
            if (!word.empty())
            {
                cout << word << " ";
                word = "";
            }
            i += 2;
        }
        else
        {
            word += str[i];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}