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

    int N;
    cin >> N;
    int p1 = 0, p2 = 0;

    vector<pair<int, int>> v;
    int sum1 = 0, sum2 = 0;
    foi(0, N)
    {

        cin >> p1 >> p2;
        sum1 += p1;
        sum2 += p2;
        if (sum1 > sum2)
            v.eb((sum1 - sum2), 1);
        else
            v.eb((sum2 - sum1), 2);
    }
    sort(v.begin(), v.end());

    // for (auto it : v)
    //     cout << it.second << " " << it.first << endl;
    // cout << endl;

    cout << v[v.size() - 1].second << " " << v[v.size() - 1].first;

    return 0;
}
