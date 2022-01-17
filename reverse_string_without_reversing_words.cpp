// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to reverse words in a given string.
    string reverseWords(string S)
    {
        // code here
        stack<string> st;
        string rev = "";
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] != '.')
            {
                rev = rev + S[i];
            }
            else
            {

                st.push(rev);
                st.push(".");
                rev = "";
            }
        }
        st.push(rev);

        string str = "";

        while (!st.empty())
        {
            str = str + st.top();
            st.pop();
        }

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
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
} // } Driver Code Ends