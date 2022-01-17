// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        // code here
        //         map<int,int> mp;
        //         for(int i =0;i<n;i++)
        //     {
        //         mp[arr[i]]++;
        //     }
        //     vector<int>v;
        //     for(auto it : mp)
        //     {
        //         if(it.second>1)
        //         v.emplace_back(it.first);
        //     }
        //     if(v.size())
        //   {
        //       return v;
        //   }
        //   else
        //   {
        //       v.emplace_back(-1);
        //       return v;
        //   }

// map doesn't work due to time complexity constraints

        sort(arr, arr + n);
        long long prev = -1;
        vector<int> v;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1] && prev != arr[i])
            {
                prev = arr[i];
                v.emplace_back(arr[i]);
            }
        }
        if (v.empty())
            v.emplace_back(-1);
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends