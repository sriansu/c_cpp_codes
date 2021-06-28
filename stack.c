#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node
{
    int data;
    struct node* next;
};

int isempty(struct node* root)
{
    return !root;
}

struct node* newnode(int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next= NULL;
    return temp;
}

void push(struct node** root,int data)
{
    
        struct node* temp =newnode(data);
        temp->next =*root;
        *root=temp;
    printf("\n push done");
}

int pop(struct node** root)
{
    if(isempty(*root))
    return INT_MIN;
    struct node* temp= *root;
    *root= (*root)->next;
    int pop=temp->data;
    free(temp);
    printf("\npop done");
    return pop;
    
}

int peek(struct node* root) 
{ 
    if (isempty(root)) 
        return INT_MIN; 
    else 
    return root->data; 
} 

int main()
{
    struct node* root =NULL;
    push(&root,53);
    push(&root,34);
    push(&root,24);
    push(&root,33);
    pop(&root);
   
   printf("\n%d is top",peek(root));
   return 0;
}
