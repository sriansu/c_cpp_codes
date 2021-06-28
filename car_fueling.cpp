#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::max;


int compute_min_refills(int m, int arr[], int n)
{
    // write your code here
    int numrefill = 0;
    int current = 0;
    int lastrefill;

    while (current <= n)
    {
        //if (current == n - 1)
        //break;
        lastrefill = current;
        while (current <= n && ((arr[current + 1] - arr[lastrefill]) <= m))
        {
            current = current + 1;
        }
        if (current == lastrefill)
        {
            return -1;
        }

        if (current <= n)
        {
            numrefill = numrefill + 1;
        }
    }

    return numrefill;
}

int main()
{
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    //  vector<int> stops(n);
    //for (size_t i = 0; i < n; ++i)
    //  cin >> stops.at(i);

    int arr[n + 2];
    arr[0] = 0;
    arr[n + 1] = d;
    for (int i = 1; i < n + 1; ++i)
        cin >> arr[i];

    cout << compute_min_refills(m, arr, n) << "\n";

    return 0;
}
