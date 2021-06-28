#include<stdio.h>

int linears(int a[],int i,int k)
{
	int x;
	for(x=0;x<i;x++)
	if(a[x]==k)
	return x;
	return -1;
}

int main()
{
	int i,j,k,l;
	printf("enter the no. of elements\n");
	scanf("%d",&i);
	int a[i];
	printf("\nenter the elements\n");
	for(j=0;j<i;j++)
	scanf("%d",&a[j]);
	printf("\nenter the element to be searched\n");
	scanf("%d",&k);
	l=linears(a,i,k);
	if(l==-1)
	printf("\nelement not found");
	else 
	printf("\nelement found at position %d",l+1);
	return 0;
}
