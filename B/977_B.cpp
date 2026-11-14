/*
B. Two-gram
https://codeforces.com/problemset/problem/977/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<string, int> freq;

    string ans = "";
    int maxi = 0;

    for (int i = 0; i < n - 1; i++)
    {
        string temp = s.substr(i, 2);

        freq[temp]++;

        if (freq[temp] > maxi)
        {
            maxi = freq[temp];
            ans = temp;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}