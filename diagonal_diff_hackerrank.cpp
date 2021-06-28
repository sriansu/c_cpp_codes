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
    cin>>n;
    int arr[n+1][n+1];
    foi(0,n)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    long long suml=0,sumr=0;
    foi(0,n)
    {
    suml =suml+ arr[i][i];
    sumr=sumr+ arr[i][n-i-1];
    }
    long long diff =abs(suml-sumr);
    cout<<diff<<endl;
    
    return 0;
    
}    
