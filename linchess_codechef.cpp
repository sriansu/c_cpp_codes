#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int position=-1;
        int moves =0;
        int n, chef;
        int temp_moves;

        cin>>n;
        int v[n];
        int pos[n];
        cin>>chef;
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
            if (chef%v[i]==0)
            {
                temp_moves=(chef/v[i])-1;
                pos[i]=temp_moves;
            }
            else
            {
                pos[i]=INT_MAX;
            }
        }


        int min_index1=-1;
        for (int i=0;i<n;i++)
        {
            if (min_index1==-1||(pos[i]<pos[min_index1]))
                min_index1=i;
        }


        if (pos[min_index1]!=INT_MAX)
            cout<<v[min_index1]<<"\n";
        else

            cout<<"-1"<<"\n";
    }
    return 0;
}
