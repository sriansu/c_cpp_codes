#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, temp = 0;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.emplace_back(temp);
        }
        // sort(v.begin(), v.end());
    }

    return 0;
}