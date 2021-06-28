#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define pi 3.1415926535
#define endl "\n"
#pragma GCC optimize("Ofast")
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define foi(a, b) for (int i = a; i < b; i++)
#define foll(a, b) for (ll i = a; i < b; i++)
#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b
using namespace std;
vector<int> spiral(vector<vector<int>> a, int r, int c)
{
    // code here
    int k = 0, l = 0;
    vector<int> v;
    while (k < r && l < c)
    {
        for (int i = l; i < c; ++i)
        {
            v.eb(a[k][i]);
        }
        k++;

        for (int i = k; i < r; ++i)
        {
            v.eb(a[i][c - 1]);
        }
        c--;

        if (k < r)
        {
            for (int i = c - 1; i >= l; --i)
            {
                v.eb(a[r - 1][i]);
            }
            r--;
        }

        if (l < c)
        {
            for (int i = r - 1; i >= k; --i)
            {
                v.eb(a[i][l]);
            }
            l++;
        }
    }
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r);
    for (int i = 0; i < r; i++)
    {
        matrix[i].assign(c, 0);
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiral(matrix, r, c);
    for (int i = 0; i < result.size(); ++i)
        cout << result[i] << " ";

    return 0;
}