/*
B. Fashionable Array

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n;

        vector<int>cnt(101, 0);
        for (int i = 0; i < n; i++) {
            cin>>x;
            cnt[x]++;
        }

        vector<int>vals;
        for (int v = 100; v >= 1; v--){
            if (cnt[v] > 0) 
                vals.push_back(v);
        }

        vector<int>res;
        res.reserve(n);

        int level = 1;
        while (!vals.empty()) {
            vector<int>next;
            next.reserve(vals.size());
            for (int v : vals) {
                res.push_back(v); 
                if (cnt[v] > level) next.push_back(v); 
            }
            vals.swap(next);
            level++;
        }

        int size=res.size();
        for (int i = 0; i < size; i++){
            cout<< res[i] << (i + 1 < size ? ' ' : '\n');
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