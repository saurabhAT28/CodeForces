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
        int n, k;
        cin >> n >> k;

        int gold = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (a >= k)
            {
                gold += a;
            }
            else if (a == 0 && gold > 0)
            {
                gold--;
                ans++;
            }
        }

        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}