// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int getAngle(int h, int m)
    {
        // code here
        if (h == 12)
            h = 0;
        if (m == 60)
        {
            m = 0;
            h += 1;
            if (h > 12)
                h = h - 12;
        }
        float hour_angle = 0.5 * (h * 60 + m);
        float minute_angle = 6 * m;

        float angle = abs(hour_angle - minute_angle);
        return min(360 - angle, angle);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int H, M;

        cin >> H >> M;

        Solution ob;
        cout << ob.getAngle(H, M) << endl;
    }
    return 0;
} // } Driver Code Ends