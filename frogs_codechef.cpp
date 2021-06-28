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
    ll t = 0;
    cin >> t;
    while (t--)
    {
      int n=0;
      cin>>n;
      vector<int>w(n);
      vector<int>len(n);
      foi(0,n)
      {
          cin>>w[i];
      }
      foi(0,n)
      {
          cin>>len[i];
      }

    }
    return 0;
}
//3 2 1
//1 1 1
//  2 1 _ 3       hit first two times
//    1 2 3       hit second two times


//2 1 4 3
//4 1 2 4

//2 1 _ 3 4
//2 1 _ _ 4 _ _ 3
//_ 1 _ _ 24 _ _ 3
//_ 1 _ _ 2 _ 4 3
//_1 _ _ 2 _ 3 4