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
    long long count_sarthak, count_anuradha;
    while (t--)
    {
        int n;
        long long a, b;
        count_sarthak = 0, count_anuradha = 0;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            if (s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
                count_sarthak = count_sarthak + a;
            else
                count_anuradha = count_anuradha + b;
        }

        if (count_anuradha == count_sarthak)
            cout << "DRAW"
                 << "\n";
        else if (count_anuradha > count_sarthak)
            cout << "ANURADHA"
                 << "\n";
        else
            cout << "SARTHAK"
                 << "\n";
    }
    return 0;
}