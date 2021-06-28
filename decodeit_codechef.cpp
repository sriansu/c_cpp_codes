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
    std::map<string, string> mymap =
        {{"0000", "a"}, {"0001", "b"}, {"0010", "c"}, {"0011", "d"}, {"0100", "e"}, {"0101", "f"}, {"0110", "g"}, {"0111", "h"}, {"1000", "i"}, {"1001", "j"}, {"1010", "k"}, {"1011", "l"}, {"1100", "m"}, {"1101", "n"}, {"1110", "o"}, {"1111", "p"}};

    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;

        for (int i = 0; i < n; i = i + 4)
        {
            string temp = "\0";
            for (int j = i; j < i + 4; j++)
            {
                temp = temp + s[j];
            }
            auto it = mymap.find(temp);
            cout << it->second;
        }
        cout << endl;
    }
    return 0;
}