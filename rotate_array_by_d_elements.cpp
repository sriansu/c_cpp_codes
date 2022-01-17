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
int gcd(int a, int b)
{
    if (b == 0)
        return a;

    else
        return gcd(b, a % b);
}
void rotate(vector<int> &arr, int d, int n)
{
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++)
    {

        int temp = arr[i];
        int j = i;

        while (1)
        {
            int k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> v(n);
        foi(0, n)
        {
            cin >> v[i];
        }
        rotate(v, d, n);
        foi(0, n)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}