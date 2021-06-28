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

int countkdiv(vector<int> v, int k)
{
    int freq[k] = {};
    for (int i = 0; i < v.size(); i++)
        ++freq[v[i] % k];

    int sum = freq[0] * (freq[0] - 1) / 2;
    for (int i = 1; i <= k / 2 && i != (k - i); i++)
        sum += freq[i] * freq[k - i];
    // If k is even
    if (k % 2 == 0)
        sum += (freq[k / 2] * (freq[k / 2] - 1) / 2);
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.eb(temp);
    }
    cout << countkdiv(v, k);
    return 0;
}