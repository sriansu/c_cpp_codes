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
    int n;
    cin >> n;
    int temp = 0;
    int maxh = 0;
    int count = 0;
    foi(0, n)
    {
        cin >> temp;
        if (temp > maxh)
        {
            maxh = temp;
            count = 1;
        }
        else if (temp == maxh)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}