// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string merge(string s1, string s2);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;

        cout << merge(s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends

string merge(string s1, string s2)
{
    // your code here
    string S = "";
    int len = 0;

    if (s1.length() > s2.length())
    {
        len = s1.length();
    }
    else
    {
        len = s2.length();
    }

    for (int i = 0; i < len; i++)
    {
        if (i < s1.length())
        {
            S += s1.at(i);
        }

        if (i < s2.length())
        {
            S += s2.at(i);
        }
    }

    return S;
}