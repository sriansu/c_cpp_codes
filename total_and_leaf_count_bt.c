#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node* right;
};
struct node* newnode(int data)
{
	struct node* p = (struct node*)malloc(sizeof(struct node));
	p->data = data;
	p->left  = 	NULL;
	p->right = NULL;
	 return p;
}
countnodes(struct node* root)
{
	if (root==NULL)
	return 0;
	else 
	return (1+countnodes(root->right)+countnodes(root->left)); 
	
}
leafcount(struct node* root)
{
	if (root==NULL)
	return 0;
	else if(root->right==	NULL&&root->left==NULL)
	return 1;
	else return(leafcount(root->right)+leafcount(root->left));
}

int main()
{
	struct node *root = newnode(7);
	root->left= newnode(9);
	root->right=newnode(11);
	root->right->right= newnode(23);
	root->right->left=newnode(34);
	root->left->left=newnode(29);
	
	printf("\nThe total no. of nodes in the tree =\n%d",countnodes(root));
	
	printf("\nThe total no. of leaf nodes in the tree =\n%d",leafcount(root));

	
	return 0;
}
	
