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
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        int trains[n + 1];
        trains[0] = 1, trains[1] = 2, trains[2] = 4;
        foi(3, n + 1)
            trains[i] = trains[i - 1] + trains[i - 2] + trains[i - 3];
        cout << trains[n] << endl;
    }

    return 0;
}
