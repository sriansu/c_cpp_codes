#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        long long e1, o1, e2, o2;
        if (a % 2 == 0)
        {
            e1 = a / 2;
            o1 = a / 2;
        }
        else
        {
            o1 = a / 2 + 1;
            e1 = a - o1;
        }

        if (b % 2 == 0)
        {
            e2 = b / 2;
            o2 = b / 2;
        }
        else
        {
            o2 = b / 2 + 1;
            e2 = b - o2;
        }

        long long sum = 0;
        sum = e1 * e2 + o1 * o2;
        // cout<<e1*e2;
        cout << sum << "\n";
    }
    return 0;
}