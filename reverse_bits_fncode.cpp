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

    int num = 0;
    vector<long long> v;
    while (cin >> num)
    {
        unsigned int NO_OF_BITS = sizeof(num) * 8;
        unsigned int reverse_num = 0, i, temp;

        for (i = 0; i < NO_OF_BITS; i++)
        {
            temp = (num & (1 << i));
            if (temp)
                reverse_num |= (1 << ((NO_OF_BITS - 1) - i));
        }
        v.eb(reverse_num);

        cout << v[0];
        for (int i = 1; i < v.size(); i++)
        {
            cout << ", " << v[i];
        }
    }
    return 0;
}

//32768
//101200
//262144