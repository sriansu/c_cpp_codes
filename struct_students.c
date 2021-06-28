#include<stdio.h>

int main()
{
	int a,b,i,j,temp;
	struct student
	{
		char name[20];
		int roll;
		float marks;
	};
	
	printf("Enter the no. of students\n");
	scanf("%d",&b);
	struct student s[b];
	printf("\nenter the name of %d students\n",b);
	for(a=0;a<b;a++)
	{
		scanf("%s",&s[a].name);
	}
		
	printf("\nEnter roll no. of %d students in the same sequence\n",b);
	for (a=0;a<b;a++)
	{
		scanf("%d",&s[a].roll);
	}
	printf("\nEnter marks of %d students in the same sequence\n",b);
	for(a=0;a<b;a++)
	{
		scanf("%f",&s[a].marks);
	}
	
	struct student s2;
	for(i=0;i<b-1;i++)
	{
		for(j=i+1;j<b;j++)
		{
			if(s[j].marks<s[i].marks)
			{s2=s[i];
			s[i]=s[j];
			s[j]=s2;
			}
		}
	}
	printf("\nStudents sorted according to their marks are as follows\n\n");
	for(i=0;i<b;i++)
	{
	printf("%s\t%d\t%f\n",s[i].name,s[i].roll,s[i].marks);
	
	}
		return 0;
}

