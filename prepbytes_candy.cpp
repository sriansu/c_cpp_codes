#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + a[i];
    }
    cout << sum << "\n";
    return 0;
}
