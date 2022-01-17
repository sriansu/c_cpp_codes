// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string getDayOfWeek(int d, int m, int y)
    {
        // code here

        int t[] = {0, 3, 2, 5, 0, 3,
                   5, 1, 4, 6, 2, 4};
        y -= m < 3;

        int day = (y + y / 4 - y / 100 +
                   y / 400 + t[m - 1] + d) %
                  7;

        // it was maths i didn't do shit
        switch (day)
        {
        case 0:
            return "Sunday";

        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
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
        int d, m, y;

        cin >> d >> m >> y;

        Solution ob;
        cout << ob.getDayOfWeek(d, m, y) << endl;
    }
    return 0;
} // } Driver Code Ends