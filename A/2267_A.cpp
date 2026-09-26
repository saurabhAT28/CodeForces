/*
A. Turn Into Palindrome

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
        char ch;
        string str;

        cin >> n >> ch;
        cin >> str;

        int coins = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (str[i] == str[j])
            {
                i++;
                j--;
                continue;
            }

            if (str[i] == ch || str[j] == ch)
            {
                coins++;
            }
            else
            {
                coins += 2;
            }
            i++;
            j--;
        }

        cout << coins << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}