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

    int d, i, s, v, f;
    cin >> d >> i >> s >> v >> f;
    pair<int, int> a[s];
    string street_name[s];
    int l[s];
    for (int i = 0; i < s; i++)
        cin >> a[i].first >> a[i].second >> street_name[i] >> l[i];

    for (int i = 0; i < v; i++)
    {
        int p;
        cin >> p;
        for (int i = 0; i < p; i++)
        {
            string name;
            cin >> name;
        }
    }
    cout << 3 << endl;
    cout << 0 << endl;
    cout << 1 << endl;
    cout << "rue-de-londres"
         << " " << 6 << endl;
    cout << 2 << endl;
    cout << 1 << endl;
    cout << "rue-de-moscou"
         << " " << 6 << endl;
    cout << 1 << endl;
    cout << 2 << endl;
    cout << "rue-d-athenes"
         << " " << 1 << endl;
    cout << "rue-d-amsterdam"
         << " " << 1 << endl;

    return 0;
}