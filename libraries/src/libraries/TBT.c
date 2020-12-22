#include<stdio.h>
#include<malloc.h>

#include "libr.h"

struct tbtnode
{
	int lbit,rbit,data;
	struct tbtnode *lc,*rc;
}*root_key,*head,*tmp,*new_k,*tmp1;
void create_tbt()
{
	new_k=(struct tbtnode*)malloc(sizeof(struct tbtnode));
	printf("enter data\n");
	scanf("%d",&new_k->data);
	if(root_key==NULL)
	{
		root_key=new_k;
		head->lc=root_key;
		new_k->lc=head;
		new_k->rc=head;
		new_k->lbit=1;
		new_k->rbit=1;
		head->lbit=0;
		head->rbit=1;
	}
	else
	{
		tmp=root_key;
		while(1)
		{
			if(tmp->data<new_k->data)
			{
				if(tmp->rbit==1)
				{
					new_k->rc=tmp->rc;
					new_k->lc=tmp;
					tmp->rc=new_k;
					tmp->rbit=0;
					new_k->lbit=1;
					new_k->rbit=1;
					break;
				}
				else
				{
					tmp=tmp->rc;
				}
			}
			else if(tmp->data>new_k->data)
			{
				if(tmp->lbit==1)
				{
					new_k->lc=tmp->lc;
					new_k->rc=tmp;
					tmp->lc=new_k;
					tmp->lbit=0;
					new_k->lbit=1;
					new_k->rbit=1;
					break;
				}
				else
				{
					tmp=tmp->lc;
				}
			}
		}
	}
}
struct tbtnode* leftmost(struct tbtnode *tmp)
{
	while(tmp->lbit==0)
	{
		tmp=tmp->lc;
	}
	return tmp;
}
void inorder()
{
	tmp1=root_key;
	tmp1=leftmost(tmp1);
	while(tmp1!=head)
	{
		printf("\t%d",tmp1->data);

		if(tmp1->rbit==0)
		{
			tmp1=leftmost(tmp1->rc);
		}
		else
		{
			tmp1=tmp1->rc;
		}
	}
}
void TBT()
{
	int ch=0;
	root_key=NULL;
	while(ch!=3)
	{
		printf("\n1)create 2)display 3) exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			create_tbt();
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
}
