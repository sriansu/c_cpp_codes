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
    vector<ll> v;
    ll temp = 0;
    ll mins = 0, maxs = 0;
    foi(0, 5)
    {
        cin >> temp;
        v.eb(temp);
    }
    sort(v.begin(), v.end());

    foi(0, 4)
    {
        mins = mins + v[i];
    }

    for (int j = 4; j >= 1; j--)
    {
        maxs = maxs + v[j];
    }
    cout << mins << " " << maxs;
    return 0;
}