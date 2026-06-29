/*
A. Pangram
https://codeforces.com/problemset/problem/520/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    string str;
    cin >> n >> str;

    if (n >= 26)
    {
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 'a' - 'A';
            st.insert(str[i]);
        }
        if (st.size() == 26)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}