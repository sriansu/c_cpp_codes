// { Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends

#include <bits/stdc++.h>
class Solution
{

public:
    string roundToNearest(string str)
    {
        // Complete the function
        int n = str.size();
        if (str[n - 1] <= '5')
        {
            str[n - 1] = '0';
            return str;
        }

        str[n - 1] = '0';
        int i = n - 2;
        while (i >= 0 && str[i] == '9')
        {
            str[i] = '0';
            i -= 1;
        }
        if (i < 0)
            str.insert(0, "1");
        else
            str[i]++;
        return str;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.roundToNearest(s) << endl;
    }

    return 0;
} // } Driver Code Ends