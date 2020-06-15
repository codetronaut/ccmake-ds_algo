#include<stdio.h>
#include<malloc.h>

#include "libr.h"

struct node
{
 char name[10];
 struct node *next;
 struct node*pre;
}*new1,*last,*first,*temp,*temp1;
int i=0,pos,count=0;
char name1[10];
void insert_beg()
{
 new1=( struct node*) malloc(sizeof(struct node));
 printf("enter your name\n");
 scanf("%s",&new1->name);
 if(first==NULL && last==NULL)
 {
  first=new1;
  last=new1;
  new1->next=NULL;
 }
 else
 {
  new1->next=first;
  first=new1;
 }
}
void insert_end()
{
 new1=( struct node*) malloc(sizeof(struct node));
 printf("enter your name\n");
 scanf("%s",&new1->name);
 if(first==NULL && last==NULL)
 {
  first=new1;
  last=new1;
  new1->next=NULL;
 }
 else
 {
  new1->next=NULL;
  last->next=new1;
  last=new1;
 }
 }
 void insert_mid()
 {
  new1=( struct node*) malloc(sizeof(struct node));
  printf(" enter position where you wish to add node\n");
  scanf("%d",&pos);
  if(pos==1)
  {
   insert_beg();
  }
  else if(pos==(count+1))
 {
  insert_end();
 }
 else
 {
 printf("enter your name\n");
 scanf("%s",new1->name);
  temp=first;
  while(i!=(pos-1))
  {
   temp=temp->next;
   i++;
  }
  new1->next=temp->next;
  temp->next=new1;
 }
}
void display()
{
 for(temp=first;temp!=NULL;temp=temp->next)
 {
  printf("%s",temp->name);
  printf("\n");
 }
}
void del_beg()
{
 if(first==NULL&&last==NULL)
 {
 printf(" list is empty\n");
}
else
{
 if(first==last)
 {
  temp=first;
  first=NULL;
  last=NULL;
  free(temp);
 }
 else
{
 temp=first;
 first=first->next;
 free(temp);
 }
}
}
void del_end()
{
 if(first==NULL&&last==NULL)
 {
  printf(" list is empty\n");
 }
 else
 {
  if(first==last)
  {
   temp=first;
   first=NULL;
   last=NULL;
   free(temp);
  }
 else
 {
  temp=first;
  while(temp->next!=NULL)
  {
   temp1=temp;
   temp=temp->next;
  }
  temp1->next=NULL;
  free(temp);
  }
 }
}
void del_mid()
{
 printf("enter position\n");
 scanf("%d",&pos);
 if(pos==1)
 {
 del_beg();
}
 else if(pos==(count+1))
 {
  del_end();
 }
 else
 {
 temp=first;
  while(i!=(pos-1))
  {
   temp1=temp;
   temp=temp->next;
   i++;
   }
  temp1->next=temp->next;
  free(temp);
  }
}
void search()
{
 printf("enter position of node to be searched\n");
 scanf("%d",&pos);
 temp=first;
 while(i!=(pos-1))
 {
  temp=temp->next;
  }
  printf("data is =%s",temp->name);
  printf("\n");
}
void SLL()
{
 int ch=0;
 first=NULL;
 last=NULL;
 clrscr();
 while(ch!=9)
{
 printf("enter your choice 1) insertion at beginning 2) insertion in middle 3) insertion at end 4) deletion at beginning 5) deletion in middle 6)deletion at end 7) display 8)search 9) exit\n");
 scanf("%d",&ch);
 if(ch==1)
 {
  insert_beg();
  count++;
 }
 else if(ch==2)
 {
   insert_mid();
   count++;
 }
 else if(ch==3)
 {
  insert_end();
  count++;
 }
 else if(ch==4)
 {
  del_beg();
  count--;
 }
 else if(ch==5)
 {
  del_mid();
  count--;
 }
 else if(ch==6)
 {
  del_end();
  count--;
 }
 else if(ch==7)
 {
  display();
 }
 else if(ch==9)
 {
  printf("exit\n");
 }
 else if(ch==8)
 {
   search();
 }
 else
 {
  printf("error\n");
  }
  }
  getch();
  }
