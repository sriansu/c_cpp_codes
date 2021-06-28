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

bool possible(int mid, ll arr[], int n, int k)
{

    int pos = arr[0];

    int elements = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= mid)
        {

            pos = arr[i];
            elements++;

            if (elements == k)
                return true;
        }
    }
    return 0;
}

ll largestmindistance(long long arr[], int n, int k)
{

    sort(arr, arr + n);

    int result = -1;

    int left = 1, right = arr[n - 1];

    while (left < right)
    {
        int mid = (left + right) / 2;

        if (possible(mid, arr, n, k))
        {

            result = max(result, mid);
            left = mid + 1;
        }

        else
            right = mid;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n;
    cin >> n >> m;
    long long arr[n];
    foi(0, n)
    {
        cin >> arr[i];
    }
    cout << largestmindistance(arr, n, m);
    return 0;
}