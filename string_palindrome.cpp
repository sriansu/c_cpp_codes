#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define pi 3.1415926535
#define endl "\n"
#pragma GCC optimize("Ofast")
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define foi(a, b) for (int i = a; i < b; i++)
#define foll(a, b) for (ll i = a; i < b; i++)
#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b
using namespace std;

bool palindrome_recur(string str, int s, int e)
{
    if (s == e)
        return true;

    if (str[s] != str[e])
        return false;

    if (s < e + 1)
        return palindrome_recur(str, s + 1, e - 1);

    return true;
}
bool palindrome(string s)
{
    int start = s[0];
    int end = s[s.length() - 1];

    while (end > start)
    {
        if (s[start++] != s[end--])
        {

            return false;
        }
    }
    return true;
}

bool palindrome_reverse(string s)
{
    string r = s;
    reverse(s.begin(), s.end());
    if (s == r)
        return 1;
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //cout << "Enter a string : ";
    string s;
    cin >> s;
    cout << palindrome_recur(s, 0, s.length() - 1) << endl;

    return 0;
}