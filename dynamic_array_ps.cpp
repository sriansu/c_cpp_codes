#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, q;
    int lastAnswer = 0;
    cin >> n >> q;
    vector<int> v[n];
    for (int i = 0; i < q; i++)
    {
        int a, x, y;
        cin >> a;
        switch (a)
        {
        case 1:
        {
            cin >> x >> y;
            int j = ((x ^ lastAnswer) % n);
            v[j].emplace_back(y);
            break;
        }
        case 2:
        {
            cin >> x >> y;
            int j = ((x ^ lastAnswer) % n);
            int k = y % v[j].size();
            lastAnswer = v[j][k];
            cout << lastAnswer << endl;
            break;
        }
        default:
            break;
        }
    }
}
