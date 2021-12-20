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
ll modPow(int x, int m, int d) {

    if(m == 0) return 1; 

    long long p = modPow(x, m/2, d) % d;

    p = (p * p) % d;

    return m % 2 ? (p * x) % d : p;
}

 long long Nth_term(long long a, long long r, long long n){
   	    // Code here
    long long ans= ((a)*(long long)(modPow(r,n-1,MOD)));  
   	     
   	    return ans%MOD;
   	}    

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
ll a,r,n;
cin>>a>>r>>n;
cout<< Nth_term(a,r,n);
    return 0;
}