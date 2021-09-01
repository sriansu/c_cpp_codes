#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> v)
{
    int maxf = 0, result;
    for (int i = 1; i < 6; i++)
    {
        int freq = count(v.begin(), v.end(), i);
        if (maxf < freq)
            result = i;
        maxf = max(maxf, freq);
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << migratoryBirds(v);
}