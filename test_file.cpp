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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i = 5, j = 5;
    vector<vector<int>> v(i, vector<int>(j));

    vector<int> vec(i, 10);
    for (int i = 0; i < v.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    foi(0, 5)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    int arr[5] = {36, 34, 33, 32, 21};
    int *p;
    p = arr;
    foi(0, 5)
    {
        cout << *(p + i) << " ";
    }
    return 0;
}