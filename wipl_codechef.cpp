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
        int n = 0, k = 0;
        ll sum = 0;
        ll temp = 0;

        vector<ll> tow;

        cin >> n >> k;
        foi(0, n)
        {
            cin >> temp;
            tow.eb(temp);
            sum = sum + temp;
        }
        if (sum / 2 < k)
        {
            cout << -1 << endl;
            continue;
        }
        sort(tow.begin(), tow.end(), greater<ll>());
    }
    return 0;
}