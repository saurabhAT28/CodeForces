#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef array<int, 64> Mat;
static const int SV[8] = {0, 3, 5, 6, 9, 10, 12, 15};
static const int NEG = -1000000000;

inline int goodv(int x)
{
    return (x % 3 == 0) ? 1 : 0;
}

void makeIdentity(Mat &M)
{
    for (int j = 0; j < 8; j++)
    {
        for (int k = 0; k < 8; k++)
        {
            M[j * 8 + k] = (j == k) ? 0 : NEG;
        }
    }
}

void makeReal(Mat &M, int val)
{
    for (int j = 0; j < 8; j++)
    {
        for (int k = 0; k < 8; k++)
        {
            M[j * 8 + k] = goodv(val ^ SV[j] ^ SV[k]);
        }
    }
}

void combine(const Mat &A, const Mat &B, Mat &C)
{
    for (int j = 0; j < 8; j++)
    {
        const int base = j * 8;
        for (int l = 0; l < 8; l++)
        {
            int best = A[base + 0] + B[0 * 8 + l];
            for (int k = 1; k < 8; k++)
            {
                int v = A[base + k] + B[k * 8 + l];
                if (v > best)
                    best = v;
            }
            C[base + l] = best;
        }
    }
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            auto compute = [&]()
            { return goodv(a[1]); };
            cout << compute() << " ";
            for (int i = 0; i < q; i++)
            {
                int p, x;
                cin >> p >> x;
                a[p] = x;
                cout << compute() << " ";
            }
            cout << "\n";
            continue;
        }

        if (n == 2)
        {
            auto compute = [&]()
            {
                int best = 0;
                for (int j = 0; j < 8; j++)
                {
                    int s = goodv(a[1] ^ SV[j]) + goodv(a[2] ^ SV[j]);
                    best = max(best, s);
                }
                return best;
            };
            cout << compute() << " ";
            for (int i = 0; i < q; i++)
            {
                int p, x;
                cin >> p >> x;
                a[p] = x;
                cout << compute() << " ";
            }
            cout << "\n";
            continue;
        }

        int m = n - 2;
        int size = 1;
        while (size < m)
        {
            size *= 2;
        }
        vector<Mat> tree(2 * size);
        for (int tI = 0; tI < size; tI++)
        {
            if (tI < m)
                makeReal(tree[size + tI], a[tI + 2]);
            else
                makeIdentity(tree[size + tI]);
        }
        for (int i = size - 1; i >= 1; i--){
            combine(tree[2 * i], tree[2 * i + 1], tree[i]);
        }

        auto compute = [&]()
        {
            Mat &T = tree[1];
            int start[8], fin[8], mid[8];
            for (int j = 0; j < 8; j++){
                start[j] = goodv(a[1] ^ SV[j]);
            }
            for (int l = 0; l < 8; l++)
            {
                fin[l] = goodv(a[n] ^ SV[l]);
            }
            for (int l = 0; l < 8; l++)
            {
                int best = start[0] + T[0 * 8 + l];
                for (int j = 1; j < 8; j++)
                {
                    int v = start[j] + T[j * 8 + l];
                    if (v > best)
                        best = v;
                }
                mid[l] = best;
            }
            int ans = 0;
            for (int l = 0; l < 8; l++)
            {
                ans = max(ans, mid[l] + fin[l]);
            }
            return ans;
        };

        cout << compute() << " ";
        for (int i = 0; i < q; i++)
        {
            int p, x;
            cin >> p >> x;
            a[p] = x;
            if (p >= 2 && p <= n - 1)
            {
                int idx = size + (p - 2);
                makeReal(tree[idx], x);
                idx /= 2;
                while (idx >= 1)
                {
                    combine(tree[2 * idx], tree[2 * idx + 1], tree[idx]);
                    idx /= 2;
                }
            }
            cout << compute() << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}