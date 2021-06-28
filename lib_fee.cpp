#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int d1, m1, y1;
    int d2, m2, y2;

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    int fine = 0;

    int dyear = y1 - y2;
    int dmon = m1 - m2;
    int dday = d1 - d2;

    if (dyear > 0)
    {
        fine = 10000;
    }
    else if (dmon > 0 && dyear == 0)
    {
        fine = 500 * dmon;
    }
    else if (dday > 0 && dmon == 0)
    {
        fine = 15 * dday;
    }

    cout << fine << endl;
    return 0;
    //}
}
