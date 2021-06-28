#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};
int isBST(struct node *node, int min, int max)
{
    if (node == NULL)
        return 1;
    if (node->data < min || node->data > max)
        return 0;
    return isBST(node->left, min, node->data - 1) &&
           isBST(node->right, node->data + 1, max);
}
bool checkBST(struct node *root)
{
    return (isBST(root, INT_MIN, INT_MAX));
}

int height(struct node *root)
{
    // Write your code here.
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    return max(height(root->left) + 1, height(root->right) + 1);
}

struct node *findmax(struct node *root)
{
    if (root == NULL)
        return NULL;
    else if (root->right != NULL)
        return findmax(root->right);
    return root;
}

struct node *findmin(struct node *root)
{
    if (root == NULL)
        return NULL;
    else if (root->left != NULL)
        return findmin(root->left);
    return root;
}

struct node *Delete(struct node *root, int x)
{

    if (root == NULL)
        return NULL;
    if (x > root->data)
        root->right = Delete(root->right, x);
    else if (x < root->data)
        root->left = Delete(root->left, x);
    else
    {
        //No Children
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        //One Child
        else if (root->left == NULL || root->right == NULL)
        {
            struct node *temp;
            if (root->left == NULL)
                temp = root->right;
            else
                temp = root->left;
            free(root);
            return temp;
        }

        //Two Children
        else
        {
            struct node *temp = findmin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

struct node *search(struct node *root, int data)
{
    if (root == NULL || root->data == data)
        return root;
    if (root->data < data)
        return search(root->right, data);
    else if (root->data > data)
        return search(root->left, data);
    else
        return NULL;
}
struct node *newnode(struct node *root, int data)
{
    struct node *temp = new (struct node);
    //struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->right = temp->left = NULL;
    return temp;
}

struct node *insert(struct node *root, int data)
{
    if (root == NULL)
        return newnode(root, data);
    if (data < root->data)
        root->left = insert(root->left, data);
    if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \t", root->data);
        inorder(root->right);
    }
}

struct node *lca(struct node *root, int v1, int v2) //least common ancestor of two given nodes
{
    if (root->data > v1 && root->data > v2)
        return root->left = lca(root->left, v1, v2);

    else if (root->data < v1 && root->data < v2)
        return root->right = lca(root->right, v1, v2);

    else
        return root;
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 54);
    insert(root, 30);
    insert(root, 34);
    insert(root, 23);
    insert(root, 26);
    insert(root, 29);
    insert(root, 31);
    insert(root, 37);
    insert(root, 10);
    inorder(root);
    printf("\n");
    int a, b;
    struct node *lc = lca(root, 29, 31);
    cout << lc->data << std::endl;

    if (checkBST(root))
        cout << "Is a BST" << std::endl;
    else
    {
        cout << "Not a BST" << std::endl;
    }
    printf("\nSearch an element?\ny=1,n=2\n");
    scanf("%d", &a);
    while (a == 1)
    {
        printf("\nEnter the element\n");
        scanf("%d", &b);
        struct node *c = search(root, b);
        if (c == NULL)
        {
            printf("\nElement not found");
        }
        else
            printf("\nElement found");
        printf("\nSearch another element?\ny=1,n=2\n");
        scanf("%d", &a);
    }

    printf("\nDelete an element?\ny=1,n=2\n");
    scanf("%d", &a);
    while (a == 1)
    {
        printf("\nEnter the element\n");
        scanf("%d", &b);
        Delete(root, b);
        printf("\n");
        inorder(root);
        printf("\nDelete another element?\ny=1,n=2\n");
        scanf("%d", &a);
    }
    std::cout << "\n"
              << height(root);
}
