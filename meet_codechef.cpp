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

int convertmin(int hour, int min, string pmoram)
{

    if (hour == 12)
        hour = 0;
    if (pmoram == "PM")
    {
        hour = hour + 12;
    }
    return (hour * 60 + min);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {

        string p_ap;
        int p_hr, p_min;
        cin >> p_hr;
        cin.ignore();
        cin >> p_min;
        //cin.ignore();
        cin >> p_ap;

        int p = convertmin(p_hr, p_min, p_ap);

        int x;
        cin >> x;
        foi(0, x)
        {

            string l_ap;
            int l_hr, l_min;
            cin >> l_hr;
            cin.ignore();
            cin >> l_min;
            // cin.ignore();
            cin >> l_ap;
            int l = convertmin(l_hr, l_min, l_ap);

            string r_ap;
            int r_hr, r_min;
            cin >> r_hr;
            cin.ignore();
            cin >> r_min;
            //  cin.ignore();
            cin >> r_ap;
            int r = convertmin(r_hr, r_min, r_ap);
            //  cout<<l<<"\t"<<r<<"\t"<<p<<endl;
            if (l <= p && p <= r)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}
