#include <bits/stdc++.h>
#define yha mod wala value define kro
using namespace std;
int main()
{
    int t, n;
    cin >> t >> n;
    while (t--)
    {
        long long int ans;
        if (n == 2)
        {
            ans = 21;
        }
        else if (n % 2 != 0)
        {
            int k = (n - 1) / 2;
            if (k / 2 >= 1)
            {

                if (k % 2 == 0)
                {
                    ans = 21 * pow(26, k / 2) * pow(21, k / 2) + 5 * pow(26, k / 2) * pow(21, k / 2);
                }

                else
                {
                    ans = 21 * pow(26, k / 2 + 1) * pow(21, k / 2) + 5 * pow(26, k / 2) * pow(21, k / 2 + 1);
                }
            }

            else
            {
                ans = (21 * 5) + 26 * 21;
            }
        }
        else
        {
            int k = (n - 2) / 2;
            if (k > 2)
            {

                ans = 21 * pow(26, k / 2) * pow(21, k / 2) + 5 * pow(26, (k - 2) / 2 + 1) * pow(21, 2) * pow(21, (k - 2) / 2);
            }
            else
            {
                ans = 21 * 5 + 21 * 21;
            }
        }
        cout << ans % m << endl;
    }
    return 0;
}