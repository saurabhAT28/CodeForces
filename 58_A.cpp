/*


*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{   
    string str;
    string hello="hello";

    cin>>str;
    int j=0, pas=0;
    for(int i=0; i<str.length();i++){
        if(str[i]==hello[j]){
            j++;
            pas++;
        }
    }

    if(pas==5)
        cout<<"YES";
    else 
        cout<<"NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}