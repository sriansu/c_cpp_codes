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
        int n, m;
        cin >> n >> m;
        vector<ll> vn;
        vector<ll> vm;
        ll nsum = 0, msum = 0;
        ll temp = 0;
        int swaps = 0;
        foi(0, n)
        {
            cin >> temp;
            vn.eb(temp);
            nsum = nsum + temp;
        }
        foi(0, m)
        {
            cin >> temp;
            vm.eb(temp);
            msum = msum + temp;
        }

        if (nsum > msum)
        {
            cout << 0 << endl;
            continue;
        }
        sort(vn.begin(), vn.end());
        sort(vm.begin(), vm.end(), greater<ll>());

        ll ntempsum = nsum;
        ll mtempsum = msum;
        foi(0, n)
        {
            if (vn[i] < vm[i])
            {
                ntempsum = ntempsum + vm[i] - vn[i];
                mtempsum = mtempsum + vn[i] - vm[i];
                swaps++;
            }
            if (ntempsum > mtempsum)
                break;
        }
        if (ntempsum > mtempsum)
            cout << swaps << endl;
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}