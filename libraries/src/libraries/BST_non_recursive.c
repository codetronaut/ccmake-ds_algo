#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#include "libr.h"

struct BSTnode
{
    int data;
    struct BSTnode *lc,*rc;
}*root=NULL,*temp,*new1,*curr;

struct BSTnode* stk[20];
int top=-1;

void create()
{
    new1= (struct BSTnode*)malloc(sizeof(struct BSTnode));
    
    if (!new1)
	    return;

    printf("Enter data: ");
    scanf("%d", &new1->data);
    new1->lc=NULL;
    new1->rc=NULL;
    if(!root)
    {
        root=new1;
    }
    else
    {
        temp=root;
        while(0!=1)
        {
            if(temp->data < new1->data)
            {
                if(!temp->rc)
                {
                    temp->rc = new1;
                    break;
                }
                else
                    temp = temp->rc;
            }
            if(temp->data > new1->data)
            {
                if(!temp->lc)
                {
                    temp->lc = new1;
                    break;
                }
                else
                    temp = temp->lc;
            }
        }
    }
}

void pre_nonrecur()
{
    temp=root;
    stk[++top]=temp;

    while(top!=-1)
    {
        printf("%d\t", stk[top]->data);
        temp=stk[top];
        top--;
        if(temp->rc!=NULL)
        {
            stk[++top]=temp->rc;
        }
        if(temp->lc!=NULL)
        {
            stk[++top]=temp->lc;
        }
    }
}

void in_nonrecur()
{
   temp=root;
   top++;
   stk[top]=temp;
   temp=temp->lc;
   while(top!=-1)
   {
       while(temp!=NULL)
       {
            top++;
            stk[top]=temp;
            temp=temp->lc;
       }
       temp=stk[top];
       printf("%d\t", temp->data);
       top--;
       temp=temp->rc;
       if(temp!=NULL)
       {
           stk[++top]=temp;
           temp=temp->lc;
       }
   }
}

void post_nonrecur()
{
    curr=root;
    do
    {
        while(curr!=NULL)
        {
            if(curr->rc!=NULL)
            {
                stk[++top]=curr->rc;
            }
            stk[++top]=curr;
            curr=curr->lc;
        }

        curr=stk[top];
        top--;

        if(curr->rc!=NULL && curr->rc==stk[top])
        {
            temp=stk[top];
            top--;
            stk[++top]=curr;
            curr=temp;
        }
        else
        {
            printf("%d\t", curr->data);
            curr=NULL;
        }
    }while(top!=-1);
}



void BST_NR(){

   int ch;
    printf("1. Create\n2. PreOrder\n3. Inorder\n4. Postorder\n5. Exit\n");
    while(0!=1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: create();
                break;
            case 2: pre_nonrecur();
                break;
            case 3: in_nonrecur();
                break;
            case 4: post_nonrecur();
                break;
            case 5: exit(1);
                break;
        }
    }
    
}

