#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long p, h;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>h>>p;
        if (p>floor(h/2))
            cout<<"1"<<"\n";
        else
            cout<<"0"<<"\n";



    }
    return 0;
}