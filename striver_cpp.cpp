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

void explain_pair()
{
    pair<int, int> p = {2, 3};
    pair<int, pair<int, int>> q = {2, {3, 4}};

    cout << p.first << " " << p.second << endl;
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    vector<pair<int, int>> v = {{3, 4}, {9, 2}, {4, 6}};
    v.eb(2, 5);
    for (auto it : v)
    {
        cout << it.first << " " << it.second << " ";
    }
    cout << endl;
    for (vector<pair<int, int>>::iterator i = v.begin(); i != v.end(); i++)

    {
        cout << i->first << " " << i->second << " ";
    }
    cout << endl;
    cout << endl;
    cout << v[2].first << " " << v[2].second << endl;
}

void explain_vector()
{
    vector<int> v;
    v.push_back(5);
    v.emplace_back(9);
    vector<pair<int, string>> vec; // emplace back and push back diff
    vec.push_back({3, "vasu"});
    vec.emplace_back(5, "sriansu");

    vector<int> p(7, 100); // declares a vector of size 7 filled with 100's
    vector<int> q(p);      // copy p into q;

    p.eb(7);
    for (auto it : p)
    {
        cout << it << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    explain_pair();
    explain_vector();
    return 0;
}