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
//dont use inbuilt fn
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x = 0, n = 0;
        cin >> n >> x;
        vector<int> v(n);
        int count = 0;

        foi(0, n)
        {
            cin >> v[i];
        }
        foi(0, n)
        {
            if (v[i] == x)
            {
                cout << i << " ";
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == x)
            {
                cout << i;
                break;
            }
        }
        foi(0, n)
        {
            if (v[i] == x)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}