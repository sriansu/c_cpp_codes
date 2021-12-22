// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int binary_to_decimal(string str)
    {

        int dec_value = 0;

        int base = 1;

        int len = str.length();
        for (int i = len - 1; i >= 0; i--)
        {
            if (str[i] == '1')
                dec_value += base;
            base = base * 2;
        }

        return dec_value;
    }
};

// { Driver Code Starts.
int main()
{

    string str;
    cin >> str;
    Solution ob;
    int ans = ob.binary_to_decimal(str);
    cout << ans << "\n";

    return 0;
} // } Driver Code Ends