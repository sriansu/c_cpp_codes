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

int maxSubArraySum(vector<int> a, int size)
{
    int max_so_far = a[0];
    int curr_max = a[0];

    for (int i = 1; i < size; i++)
    {
        curr_max = max(a[i], curr_max + a[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

/* Driver program to test maxSubArraySum */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    foi(0, n)
    {
        cin >> v[i];
    }
    int max_sum = maxSubArraySum(v, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
