#include<stdio.h>
#include<malloc.h>

#include "libr.h"

struct tbtnode
{
	int lbit,rbit,data;
	struct tbtnode *lc,*rc;
}*root,*head,*temp,*new1,*temp1;
void create()
{
	new1=(struct tbtnode*)malloc(sizeof(struct tbtnode));
	printf("enter data\n");
	scanf("%d",&new1->data);
	if(root==NULL)
	{
		root=new1;
		head->lc=root;
		new1->lc=head;
		new1->rc=head;
		new1->lbit=1;
		new1->rbit=1;
		head->lbit=0;
		head->rbit=1;
	}
	else
	{
		temp=root;
		while(1)
		{
			if(temp->data<new1->data)
			{
				if(temp->rbit==1)
				{
					new1->rc=temp->rc;
					new1->lc=temp;
					temp->rc=new1;
					temp->rbit=0;
					new1->lbit=1;
					new1->rbit=1;
					break;
				}
				else
				{
					temp=temp->rc;
				}
			}
			else if(temp->data>new1->data)
			{
				if(temp->lbit==1)
				{
					new1->lc=temp->lc;
					new1->rc=temp;
					temp->lc=new1;
					temp->lbit=0;
					new1->lbit=1;
					new1->rbit=1;
					break;
				}
				else
				{
					temp=temp->lc;
				}
			}
		}
	}
}
struct tbtnode* leftmost(struct tbtnode *temp)
{
	while(temp->lbit==0)
	{
		temp=temp->lc;
	}
	return temp;
}
void inorder()
{
	temp1=root;
	temp1=leftmost(temp1);
	while(temp1!=head)
	{
		printf("\t%d",temp1->data);

		if(temp1->rbit==0)
		{
			temp1=leftmost(temp1->rc);
		}
		else
		{
			temp1=temp1->rc;
		}
	}
}
void TBT()
{
	int ch=0;
	clrscr();
	root=NULL;
	while(ch!=3)
	{
		printf("\n1)create 2)display 3) exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			create();
		}
		else if(ch==2)
		{
			inorder();
		}
		else if(ch==3)
		{
			printf("exit\n");
		}
		else
		{
			printf("error\n");
		}
	}
	getch();
}
