#include<stdio.h>
#include<malloc.h>

#include "libr.h"

struct node_avl
{
	int data;
	struct node_avl *left_child,*right_child;
	int height;
};

struct node_avl* newNode(int data)  
{  
    struct node_avl* newNode = (struct node_avl*)malloc(sizeof(struct node_avl)); 
    newNode->data = data;  
    newNode->left_child = NULL;  
    newNode->right_child = NULL;  
    newNode->height = 1;  
    return(newNode);  
} 

int height(struct node_avl* root)
{
	if(root == NULL)	
		return 0;
	return root->height;
}

int max(int a,int b)
{
	return (a > b)? a : b;
}

int getBF(struct node_avl *root)  
{  
    if (root == NULL)  
        return 0;  
    return height(root->left_child) - height(root->right_child);  
}  


struct node_avl* rightRotate(struct node_avl* root)
{
	struct node_avl* newroot = root->left_child;
	struct node_avl* T2 = newroot->right_child;

	newroot->right_child = root;
	root->left_child = T2;

	root->height = max(height(root->left_child),height(root->right_child)) + 1;
	newroot->height = max(height(newroot->left_child),height(newroot->right_child)) + 1;
	return newroot;
}

struct node_avl* leftRotate(struct node_avl* root)
{
	struct node_avl* newroot = root->right_child;
	struct node_avl* T2 = newroot->left_child;

	newroot->left_child = root;
	root->right_child = T2;

	newroot->height = max(height(newroot->left_child),height(newroot->right_child)) + 1;
	root->height = max(height(root->left_child),height(root->right_child)) + 1;
	return newroot;
}

struct node_avl* insert(struct node_avl* root,int data)
{
	if(root == NULL)
		return newNode(data);
	else if(data < root->data)
		root->left_child = insert(root->left_child,data);
	else if(data > root->data)
		root->right_child = insert(root->right_child,data);
	else
		return root;
	root->height = 1 + max(height(root->left_child),height(root->right_child));

	int balance = getBF(root);

	
	if (balance > 1 && data < root->left_child->data)
	{
		return rightRotate(root);
	}

	if (balance < -1 && data > root->right_child->data)
	{
		return leftRotate(root);
	}

	if (balance > 1 && data > root->left_child->data)
	{
		root->left_child = leftRotate(root->left_child);
		return rightRotate(root);
	}

	if (balance < -1 && data < root->right_child->data)
	{
		root->right_child = rightRotate(root->right_child);
		return leftRotate(root);
	}
	return root;
}

void preorder(struct node_avl* root)
{
	if (root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left_child);
		preorder(root->right_child);
	}
}

void AVL()
{
	struct node_avl* root = NULL;
	int n,data;
	printf("enter the number of nodes : ");
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&data);
		root = insert(root,data);
	}

	preorder(root);

	//return 0;
}
