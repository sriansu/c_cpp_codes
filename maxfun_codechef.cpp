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
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n, temp = 0;
        vector<ll> v;
        cin >> n;
        foll(0, n)
        {
            cin >> temp;
            v.eb(temp);
        }
        sort(v.begin(), v.end(), greater<ll>());
        ll x = v[0], y = v[n - 1], z = v[n - 1];
        ll sum = abs(x - y) + abs(y - z) + abs(z - x);
        cout << sum << endl;
    }
    return 0;
}