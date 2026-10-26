/*
A. Doremy's Paint 3
https://codeforces.com/problemset/problem/1890/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        if (freq.size() == 1)
        {
            cout << "Yes\n";
        }
        else if (freq.size() == 2)
        {
            auto it = freq.begin();
            int first = it->second;
            it++;
            int second = it->second;

            if (abs(first - second) <= 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
        {
            cout << "No\n";
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