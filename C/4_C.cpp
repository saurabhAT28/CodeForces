/*
C. Registration system
https://codeforces.com/problemset/problem/4/C
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    
    unordered_map<string, int> db;
    
    while(n--){
        string name;
        cin >> name;
        
        if(db.find(name) == db.end()){
            db[name] = 0;
            cout << "OK\n";
        } else {
            db[name]++;
            string new_name = name + to_string(db[name]);
            db[new_name] = 0;
            cout << new_name << "\n";
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