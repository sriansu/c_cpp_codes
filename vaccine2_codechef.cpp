#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n = 0, d = 0;
        int temp = 0;
        float risk = 0, norm = 0;
        int days = 0;
        cin >> n >> d;
        //vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp >= 80 || temp <= 9)
            {
                risk++;
            }
            else
            {
                norm++;
            }
        }
        //cout << risk << "\n";
        days = days + ceil(risk / d);

        days = days + ceil(norm / d);
        cout << days << "\n";
    }
    return 0;
}




/*

//CODE TEMPLATE


#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
#define ll long long int
#define MOD 1000000007 
#pragma warn -rvl
#pragma warn -par
#pragma warn -rch
#pragma GCC optimize("Ofast")
#define mp make_pair
#define pb push_back
#define pi 3.1415926535
#define endl "\n"
 
using namespace std;
//using namespace __gnu_pbds;
 
int32_t main(){
    // ifstream cin("input.txt");
    //ofstream cout("output.txt");
    //ofstream cerr("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n, d;
        cin>>n>>d;
        int risk=0, safe;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            if(temp<=9 || temp>=80) risk++;
        }
        safe = n-risk;
        int count=0;
        while(risk>=d || safe>=d){
            count++;
            if(risk>=d){
                risk-=d;
                continue;
            }
            if(safe>=d){
                safe-=d;
                continue;
            }
        }
        if(risk>0)  count++;
        if(safe>0)  count++;
        cout<<count<<endl;
    }
    return 0;
}

*/