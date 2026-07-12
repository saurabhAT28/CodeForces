/*
A. Sereja and Dima
https://codeforces.com/problemset/problem/381/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    int sereja = 0, dima = 0;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int left = 0, right = n - 1;
    bool sereja_turn = true;

    while (left <= right) {
        if (sereja_turn) {
            if (cards[left] > cards[right]) {
                sereja += cards[left];
                left++;
            } else {
                sereja += cards[right];
                right--;
            }
        } else {
            if (cards[left] > cards[right]) {
                dima += cards[left];
                left++;
            } else {
                dima += cards[right];
                right--;
            }
        }
        sereja_turn = !sereja_turn;
    }

    cout << sereja << " " << dima << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}