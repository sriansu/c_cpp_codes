#include<bits/stdc++.h>
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

int find(int i, vector<int> &top)
{
    if (top[i] != i)
        top[i] = find(top[i], top);
    return top[i];
}
void unique(int a, int b, vector<int> &v, vector<int> &top, vector<int> &put)
{
    int A = find(a, top);
    int B = find(b, top);
    if (A == B)
        return;
    if (put[A] > put[B])
    {
        top[B] = A;
        v[A] += v[B];
    }
    else
    {
        top[A] = B;
        v[B] += v[A];
        if (put[A] == put[B])
            put[B]++;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    vector<int> top(n);
    foi(0,n)
        top[i] = i;
    vector<int> put(n, 0);

   foi(0,n)
        cin >> v[i];
    int p;
    cin >> p;
   
    foi(0,p)
    {
        int a, b;
        cin >> a >> b;
        unique(--a, --b, v, top, put);
    }
    int max = 0;
    
    foi(0,n)
    {
        if (v[i] > max)
            max = v[i];
    }
    cout << max;
    return 0;
}
