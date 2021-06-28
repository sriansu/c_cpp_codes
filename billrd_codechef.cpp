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
    long long t = 0;
    cin >> t;
    while (t--)
    {
        ll n = 0, k = 0, x = 0, y = 0;
        cin >> n >> k >> x >> y;
        ll kmod = k % 4;
        if (x == y)
        {
            cout << n << " " << n << endl;
            continue;
        }
        ll h1[2], h2[2], h3[2], h4[2];
        if (x < y)
        {
            h1[0] = x + n - y;
            h1[1] = n;
            h2[0] = h1[1];
            h2[1] = h1[0];

            h3[0] = y - x;
            h3[1] = 0;
            h4[0] = h3[1];
            h4[1] = h3[0];
        }
        else
        {
            h1[0] = n;
            h1[1] = y + n - x;
            h2[0] = h1[1];
            h2[1] = h1[0];

            h3[0] = 0;
            h3[1] = x - y;
            h4[0] = h3[1];
            h4[1] = h3[0];
        }
        switch (kmod)
        {
        case 0:
            cout << h4[0] << " " << h4[1] << endl;
            break;
        case 1:
            cout << h1[0] << " " << h1[1] << endl;
            break;
        case 2:
            cout << h2[0] << " " << h2[1] << endl;
            break;
        case 3:
            cout << h3[0] << " " << h3[1] << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}