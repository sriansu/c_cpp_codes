#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long pc, pr;
    for (int i=0;i<n;i++)
    {

        cin>>pc>>pr;
        int countc, countr;
        // 14 24 28 18
        if (pc%9!=0)
        {
            countc=(pc/9)+1;
        }
        else if (pc%9==0)
        {
            countc=pc/9;
        }
        if (pr%9!=0)
        {
            countr=(pr/9)+1;
        }
        else if (pr%9==0)
        {
            countr=pr/9;
        }
        if (countr<=countc)
            cout<<"1"<<" "<<countr<<"\n";
        else
            cout<<"0"<<" "<<countc<<"\n";


    }


    return 0;
}