#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, p;
        cin >> s >> p;
        char temp = p[0];
        string temp_s = s;
        for (char j = 97; j <= 122; j++)
        {
            for (int i = 0; i < s.length(); i++)

            {
                if (s[i] == j && s[i] <= temp)
                    cout << s[i];
            }
        }
    }
    return 0;
}
