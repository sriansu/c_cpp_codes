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

/*

//CODE TEMPLATE

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#include <vector>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define foI(a, b) for (int i = a; i < b; i++)
#define foL(a, b) for (ll i = a; i < b; i++)
#define getMax(a, b) a > b ? a : b
#define getMin(a, b) a < b ? a : b
using namespace std;
void solve(int n, int k)
{
    int curr_sum = 0;
    int positives = 0;
    int a[n];
    foI(0, n)
    {
        if (n % 2 == 0)
        {
            if (i % 2 == 0)
                a[i] = -(i + 1);
            else
                a[i] = i + 1;
        }
        else
        {
            if (i % 2 != 0)
                a[i] = -(i + 1);
            else
                a[i] = i + 1;
        }
    }

    foI(0, n)
    {
        if (a[i] > 0)
        {
            positives++;
        }
    }

    int i = 0;
    while (i < n)
    {
        curr_sum += a[i];
        if (curr_sum > 0)
        {
            if (positives == k)
                break;
            else if (positives < k)
            {
                int j = n - 1;
                while (positives != k)
                {
                    if (a[j] < 0)
                    {
                        a[j] = -a[j];
                        positives++;
                    }
                    j--;
                }
            }
            else if (positives > k)
            {
                int sufixes = n - 1;
                while (positives != k)
                {
                    if (a[sufixes] > 0)
                    {
                        a[sufixes] = -a[sufixes];
                        positives--;
                    }
                    sufixes--;
                }
            }
        }
        i++;
    }
    foI(0, n)
            cout
        << a[i] << " ";
    cout << "\n";
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    fastio int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;
        solve(n, k);
    }
}
*/
























































