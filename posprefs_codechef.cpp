#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 0;
    cin >> t;
    for (int p = 0; p < t; p++)
    {
        int n = 0, k = 0;
        cin >> n >> k;

        int neg_val = n - k;
        int psum = 0;
        int nsum = 0, n_count = 0, p_count = 0;
        int arr[n + 1];
        for (int x = 0; x <= n; x++)
        {
            arr[x] = x;
        }
        int i;
        for (i = 1; i <= n; i++)
        {
            if (n_count == neg_val)
                break;
            else if (psum + nsum - i <= 0)
            {
                arr[i] = -i;
                nsum = nsum - i;
                n_count++;
                i++;
            }
            else
            {

                psum = psum + i;
                p_count++;
            }
        }
        int j;
        p_count = 0;
        for (j = 1; j <= n; j++)
        {
            if (arr[j] > 0)
                p_count++;

            if (p_count == k)
                break;
        }
        int z;
        for (z = j + 1; z <= n; z++)
        {
            arr[z] = -z;
        }

        //   cout << j << " "
        //      << "\n";

        for (int i = 1; i <= n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    return 0;
}

//1 -2 3 -4 5
/*else
            {
                psum = psum + i;
                p_count++;
            }
*/

























































