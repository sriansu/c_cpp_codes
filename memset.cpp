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

    char str[] = "sriansu Choudhary";
    memset(str, 'x', 5);
    cout << str << endl;

    int a[5];

    // all elements of A are zero
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    // all elements of A are -1
    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    // Would not work
    memset(a, 5, sizeof(a)); // WRONG
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    double x = pi;
    cout << fixed << setprecision(9) << x;
    return 0;
}