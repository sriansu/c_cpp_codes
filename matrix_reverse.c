#include<stdio.h>
int main()
{
	int i,b,c;
	printf("enter the no. of elements you wanna enter\n");
	scanf("%d",&b);
	while(b>1000)
	{
		printf("enter a no. less than 1000\n");
		scanf("%d",&b);
		
	}
	int a[b];
	printf ("Enter the array elements\n");
	for(i=0;i<b;i++)
	{scanf("%d",&a[i]);
	}
	for(c=b-1;c>-1;c--)
	{printf("%d  ",a[c]);
	}
}
