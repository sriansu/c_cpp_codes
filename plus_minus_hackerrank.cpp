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
    int temp = 0;
    float count_p = 0, count_n = 0, count_z = 0;
    cin >> n;
    float nf = (float)n;
    foi(0, n)
    {
        cin >> temp;
        if (temp == 0)
            count_z++;
        if (temp > 0)
            count_p++;
        if (temp < 0)
            count_n++;
    }
    float p = count_p / nf;
    float neg = count_n / nf;
    float z = count_z / nf;

    cout << fixed << setprecision(6) << p << endl;
    cout << fixed << setprecision(6) << neg << endl;
    cout << fixed << setprecision(6) << z << endl;
    return 0;
}
