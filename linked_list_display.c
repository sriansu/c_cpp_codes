#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
}*first;

void create(int A[],int n)

{    
     int i;
     struct node* t;
     struct node* last;
	 first = (struct node*)malloc(sizeof(struct node));
	 first->data=A[0];
	 first->next=NULL;
	 last=first;
	 
	 for(i=1;i<n;i++)
	 {
	 	t=(struct node*)malloc(sizeof(struct node));
	 	t->data=A[i];
	 	t->next=NULL;
	 	last->next=t;
	 	last=t;
	 	
	 }
	 
}

void display(struct node* p)
{   
printf("\n");
	while(p!=NULL)
	{
	  printf("%d   ",p->data);
	  p=p->next;
	  	
	}
	 printf("\n\nNo. of nodes= %d",count(first));
}
int count(struct node* p)
{   int i =0;
	while(p!=NULL)
	{
		i++;
		p=p->next;
	}
	return i;
}

void search(struct node* p,int r)
{    int z=0;

while(p!=NULL)
	{
		if(p->data==r)
		{
		printf("\n\nElement found  %d",p->data);
		z=z+1;
		break;
		}
		p=p->next;
	}
	if(z!=1){
	
	printf("\n\nElement not found");
	 }
	
}

void insert(struct node*p,int index,int data)
{   
    struct node*t; 
    int x;
	if(index<0||index>count(p))
	return;
	
	t=(struct node*)malloc(sizeof(struct node));
	t->data=data;
	
	if(index==0)
	{
	   t->next=first;
	   first=t;	
	}
	else
	{
		for(x=0;x<index-1;x++)
		p=p->next;
		t->next=p->next;
		p->next=t;
		
	}
	
}

void sortedinsert(struct node* p,int r)
{
	struct node*t,*q=NULL;
	t=(struct node*)malloc(sizeof(struct node));
	t->data=r;
	t->next=NULL;
	if(p==NULL)
	{
	first=t;
	}
	else{
	
	while(p&&(p->data<r))
	{
		q=p;
		p=p->next;
	}
	if(p==first)
    {
     t->next=first;
     first=t;
      }
else
{
	t->next=q->next;
	q->next=t;
	
}

}
}

int Delete(struct node *p,int index)
{
struct node *q=NULL;
int x=-1,i;
if(index < 1 || index > count(p))
return -1;
if(index==1)
{
q=first;
x=first->data;
first=first->next;
free(q);
return x;
}
else
{
for(i=0;i<index-1;i++)
{
q=p;
p=p->next;
}
q->next=p->next;
x=p->data;
free(p);
return x;
}
}


int main()
{    int a,q,r,s,elem;
	int A[]={3,4,5,12,23,26,29,34,37,39,40,42};
	create(A,12);
	display(first);
	
	
		printf("\ndo you want to insert any element to the sorted list?\ny=1,n=2\n");
	scanf("%d",&r);
	
	while(r==1)
{    printf("\nEnter the data\n ");
     scanf("%d",&s);
		sortedinsert(first,s);
	display(first);

	 printf("\n\nDo you want to insert another element in the sorted list?\ny=1,n=2\n");
	scanf("%d",&r);
}
    
	printf("\n\nDo you want to insert an element in the list?\ny=1,n=2\n");
	scanf("%d",&a);

	 while(a==1){ int b=0,c=0;
     printf("\n\nEnter the position you want it to be inserted\n ");
     scanf("%d",&b);
     printf("\n\nEnter the data you want to insert\n ");
     scanf("%d",&c);
     insert(first,b,c);
     display(first);

     printf("\n\nDo you want to insert another element in the list?\ny=1,n=2\n");
	scanf("%d",&a);
    	
     	}
    
	
	printf("\n\nDo you want to search an element in the list?\ny=1,n=2\n");
	scanf("%d",&q);
	while(q==1)
	{   
		printf("\nEnter the element\n");
		scanf("%d",&elem);
		search(first,elem);
		printf("\n\nDo you want to search another element in the list?\ny=1,n=2\n");
	    scanf("%d",&q);
		


    }
	printf("\n\nDo you want to delete an element in the list?\ny=1,n=2\n");
	scanf("%d",&q);
	while(q==1)
	{   
		printf("\nEnter the position\n");
		scanf("%d",&elem);
		Delete(first,elem);
		display(first);
		printf("\n\nDo you want to delete another element in the list?\ny=1,n=2\n");
	    scanf("%d",&q);
	}
    
        
	display(first);
	 
	return 0;
}
