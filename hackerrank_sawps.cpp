#include <bits/stdc++.h>

using namespace std;

// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr)
{
    int i, count = 0, n = arr.size();
    for (i = 0; i < n; i++)
    {
        if (arr[i] == (i + 1))
            continue;

        swap(arr[i], arr[arr[i] - 1]);
        count++;
        i--;
    }

    return count;
}

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << minimumSwaps(v);
}
