
#include <bits/stdc++.h>#define ll long long
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
        long long l;
        cin >> l;
        string s;
        cin >> s;
        long long good = 0, bad = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '0')
                bad++;
            else
                good++;

        
            // cout << percent << " ";
            if (percent >= 50)
                cout << "YES" << '\n';
            continue;
        }
        cout << "NO"
             << "\n";
    }
    return 0;
}