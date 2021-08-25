#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int swaps(vector<int> &v)
{
    int count = 0;
    for (int i = 0; i < v.size(); i = i++)
    {
        if (v[2 * i] == v[2 * i + 1])
            continue;
        else
        {
            int temp = v[2 * i];
         auto it = std::find(v.begin(),v.end(),temp);
        }
    }
    return count;
}

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        v.emplace_back(temp);
    }
    int ans = swaps(v);
    cout << ans << "\n";
}