// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long int largestPrimeFactor(int n)
    {
        long long maxPrime = -1;

        while (n % 2 == 0)
        {
            maxPrime = 2;
            n = n / 2;
        }

        while (n % 3 == 0)
        {
            maxPrime = 3;
            n = n / 3;
        }

        for (int i = 5; i <= sqrt(n); i += 6)
        {
            while (n % i == 0)
            {
                maxPrime = i;
                n = n / i;
            }
            while (n % (i + 2) == 0)
            {
                maxPrime = i + 2;
                n = n / (i + 2);
            }
        }

        if (n > 4)
            maxPrime = n;

        return maxPrime;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0;
} // } Driver Code Ends