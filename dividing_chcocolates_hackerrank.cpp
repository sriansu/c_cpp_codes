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
int h;
int t;

string dividingChocolate(vector<int> &v)
{
    int count1 = 0, count2 = 0, sum = 0;
    string ans;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        sum = v[i] + sum;
        if (v[i] == 100)
            count1++;
        else
            count2++;
    }

    if (count1 > 0 && (sum / 2) % 100 == 0)
    {
        if (count1 % 2 != 0)
            return "No";
        else
            return "Yes";
    }
    else if ((sum / 2) % 100 != 0)
        return "No";
    else if (count1 == 0 && count2 % 2 == 0)
        return "Yes";
    else if (count1 == 0 && count2 % 2 != 0)
        return "No";

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tests;
    cin >> tests;
    for (int test = 0; test < tests; test++)
    {
        int n;
        cin >> n;
        vector<int> chocolates(n);
        for (int i = 0; i < n; i++)
        {
            cin >> chocolates[i];
        }
        string result = dividingChocolate(chocolates);
        cout << result << endl;
    }
}