#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define pi 3.1415926535
#define endl "\n"
#pragma GCC optimize("Ofast")
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define foi(a, b) for (ll i = a; i < b; i++)
#define foll(a, b) for (ll i = a; i < b; i++)
#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b
using namespace std;

ll merge(ll arr[], ll temp[], ll left, ll mid,
         ll right)
{
    ll i, j, k;
    ll inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];

            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

ll _mergeSort(ll arr[], ll temp[], ll left, ll right)
{
    ll mid, inv_count = 0;
    if (right > left)
    {

        mid = (right + left) / 2;
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

ll inversionCount(ll arr[], ll array_size)
{
    // Your Code Here
    /*   long long i, key, j;  
      long long count=0;
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
            count++;
        }  
        arr[j + 1] = key;  
    }
    return count;*/

    ll temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    ll a[n];
    foll(0, n)
    {
        cin >> a[i];
    }
    cout << inversionCount(a, n) << endl;
    return 0;
}

pair<int, int> p[n];
    
    for (int i = 0; i < n; i++)
    {
        p[i].first = a[i];
        
        // Storing the original position of a[i]
        p[i].second = i;
    }
    
    sort(p, p+n);
    int ans = 0;
    
    for (int i = 0; i < n; i++)
    {   
        //visited[i]=true indicates that index i belongs to a cycle that is already counted
        
        //p[i].second = i denotes that the ith element was at its correct position
        
        if (visited[i] || p[i].second == i)
            continue;
            
        int cycle_size = 0;
        int j = i;
        
        //Counting the size of the cycle
        while (!visited[j])
        {
            visited[j] = 1;
            j = p[j].second;
            cycle_size++;
        }
        
        ans += (cycle_size - 1);
    }
    
    return ans;