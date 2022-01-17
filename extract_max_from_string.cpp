// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int extractMaximum(string S)
    {
        // code here.
        int maxi = 0;
        int n = 0;
        int flag = 0;

        string ns = "";
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] >= '0' && S[i] <= '9')
            {
                n = n * 10 + (S[i] - '0');
                flag = 1;
            }
            else
            {
                maxi = max(n, maxi);
                n = 0;
            }
        }
        if (flag == 0)
        {
            return -1;
        }

        else
        {
            return maxi = max(n, maxi);
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.extractMaximum(S) << endl;
    }
    return 0;
} // } Driver Code Ends