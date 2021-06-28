#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int d1, d2, v1, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    //5 4 2 10 100 = 9
    int days = 0;
    int greater = 0, total = 0, small = 0, y = 0, i = 0;

    if (d1 > d2)
    {
        greater = d1;
        small = d2;
        y = v2;
    }
    else
    {
        greater = d2;
        small = d1;
        y = v1;
    }

    for (i = small; i < greater; i++)
    {
        total = total + y;
        if (total >= p)
        {
            days = i;
            break;
        }
    }
    if (total < p)
        days = i - 1;

    if (p > total)
    {
        int rem = p - total;
        float rdays = 0;
        int yield = v1 + v2;
        if (rem % yield == 0)
            rdays = rem / yield;
        else
            rdays = (rem / yield) + 1;

        days = days + rdays;
    }
    cout << days;

    return 0;
}