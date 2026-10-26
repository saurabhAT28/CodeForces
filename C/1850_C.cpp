/*


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
        string s, ans = "";

        for (int i = 0; i < 8; i++)
        {
            cin >> s;

            for (int j = 0; j < 8; j++)
            {
                if (s[j] != '.')
                {
                    ans += s[j];
                    break;
                }
            }
        }

        cout << ans << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}