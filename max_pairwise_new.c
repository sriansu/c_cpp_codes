#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    long arr[n];
    for(i=0;i<n;i++)
    {
       scanf("%ld",&arr[i]);
    }

    int max_index1=-1,max_index2=-1;

    for(i=0;i<n;i++)
    {
        if(max_index1==-1||(arr[i]>arr[max_index1]))
        max_index1=i;
    }

    for(i=0;i<n;i++)
    {
        if(i!=max_index1 && (max_index2==-1||arr[i]>arr[max_index2]))
        max_index2=i;
    }

    printf("%ld",arr[max_index2]*arr[max_index1]);
}
