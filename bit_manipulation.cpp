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

int powertwo(int n)
{
     return (n && !(n & n - 1));
}
int modifyBit(int n, int p, int b)
{
     int mask = 1 << p;
     cout << mask;
     cout << (n & ~mask) << " " << b << p;
     return ((n & ~mask) | (b << p));
}
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int n = 0b0101;
     int k = 0b011;

     cout << ~n << endl;
     cout << (k & n) << endl;
     cout << (k | n) << endl;
     cout << (k ^ n) << endl;
     bitset<32> bit20(20);
     cout << endl
          << bit20.count() << endl
          << endl;
     int m;
     cin >> m;

     cout << powertwo(m) << endl;

     bitset<numeric_limits<unsigned long long>::digits> b(10);

     cout << b << endl
          << b.to_ullong();
     cout << endl
          << b.size();
     int modify = modifyBit(7, 3, 1);
     cout << endl
          << modify;
     return 0;
}