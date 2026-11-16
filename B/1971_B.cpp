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
        string s;
        cin >> s;

        string ans = s;
        sort(ans.begin(), ans.end());

        if (ans == s)
        {
            reverse(ans.begin(), ans.end());
        }

        if (ans == s)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << ans << "\n";
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