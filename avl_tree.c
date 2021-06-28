#include<stdio.h>
#include<stdlib.h>

struct avl
{
    int data;
    struct avl* right,*left; 
    int height;
};
int max(int a,int b)
{
   return (a>b)?a:b;
}
int height(struct avl *N) 
{ 
    if (N == NULL) 
        return 0; 
    return N->height; 
} 
 int getbalance(struct avl *N) 
{ 
    if (N == NULL) 
        return 0; 
    return height(N->left) - height(N->right); 
} 

struct avl* rightrotate(struct avl *y) 
{ 
    struct avl *x = y->left; 
    struct avl *T2 = x->right; 


    x->right = y; 
    y->left = T2; 

     printf("right\t");
    y->height = max(height(y->left), height(y->right))+1; 
    x->height = max(height(x->left), height(x->right))+1; 

    return x; 
} 


struct avl* leftrotate(struct avl *x) 
{ 
    struct avl *y = x->right; 
    struct avl *T2 = y->left; 


    y->left = x; 
    x->right = T2; 

       printf("left\t");
    x->height = max(height(x->left), height(x->right))+1; 
    y->height = max(height(y->left), height(y->right))+1; 

    return y; 
} 




struct avl* newnode(int data)
{
  struct avl* node = (struct avl*)malloc(sizeof(struct avl));
  node->data=data;
  node->right=node->left=NULL;
  node->height=1;
  return node;

}


struct avl* insert(struct avl* root,int data)
{
    if(root==NULL)
    return newnode(data);
    if(data<root->data)
    root->left =insert(root->left,data);
    else if(data>root->data)
    root->right=insert(root->right,data);
    else 
    return root;

    root->height = 1 + max(height(root->left),height(root->right)); 

    int balance = getbalance(root); 

    if(balance>1&&data<root->left->data)
    return rightrotate(root);

    if(balance<-1&&data>root->right->data)
    return leftrotate(root);

    if(balance>1&&data>root->left->data)
    {
      root->left=leftrotate(root->left);
      return rightrotate(root);
    }

    if (balance < -1 && data < root->right->data) 
    { 
        root->right = rightrotate(root->right); 
        return leftrotate(root); 
    } 
    return root;

    }


void preorder(struct avl* root)
{
  if(root!=NULL)
  {
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
  }
}




int main()
{
    struct avl* root =NULL;
   root= insert(root,34);
   root= insert(root,32);
   root= insert(root,50);
    root= insert(root,44);
    root= insert(root,45);
    root= insert(root,26);
    root= insert(root,23);
    root= insert(root,22);
    root= insert(root,16);
    root= insert(root,2);
   root= insert(root,10);
    root= insert(root,19);
   preorder(root);
   return 0;
} 
