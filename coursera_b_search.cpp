#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binarys(vector<int> &a, int low, int high, int var)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == var)
            return mid;
        if (a[mid] > var)
            return binarys(a, low, mid - 1, var);
        return binarys(a, mid + 1, high, var);
    }

    return -1;
}

int main()
{
    int n, l, temp = 0;
    cin >> n;
    vector<int>a(n);
    for (size_t j = 0; j < n; j++)
        cin >> a[j];

    sort(a.begin(),a.end());
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        l = 0;
        cin >> temp;
        l = binarys(a, 0, n - 1, temp);
        cout << l << " ";
    }
    return 0;
}
