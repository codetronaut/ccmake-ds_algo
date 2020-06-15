#include<stdio.h>
#include<malloc.h>

#include "libr.h"

struct node
{
 int data;
 struct node *next;
 struct node *pre;
}*temp,*temp1,*new1,*first,*last;
int count=0,pos=0;
void insert_beg()
{
 new1=(struct node*)malloc(sizeof(struct node));
 printf("enter a number\n");
 scanf("%d",&new1->data);
 if(first==NULL && last==NULL)
 {
  first= new1;
  last=new1;
  new1->next=NULL;
  new1->pre=NULL;
 }
 else
 {
  first->pre=new1;
  new1->next=first;
  new1->pre=NULL;
  first=new1;
 }
}
void insert_end()
{
 new1=(struct node*)malloc(sizeof (struct node));
 printf("enter a number\n");
 scanf("%d",&new1->data);
 if(last==NULL&& first==NULL)
 {
  first=new1;
  last=new1;
  new1->next=NULL;
  new1->pre=NULL;
  }
 else
 {
  last->next=new1;
  new1->next=NULL;
  new1->pre=last;
  last=new1;
 }
}
void insert_mid()
{
 int i=1;
 printf("enter the position at which you wish to enter data\n");
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
  new1=(struct node *)malloc (sizeof(struct node));
  printf("enter a number\n");
  scanf("%d",&new1->data);
  temp=first;
  while(i!=(pos-1))
  {
   temp=temp->next;
   i++;
  }
  temp1=temp->next;
  new1->next=temp1;
  new1->pre=temp;
  temp->next=new1;
  temp1->pre=new1;
 }
}
void del_beg()
{
 if(first==NULL&&last==NULL)
 {
 printf("linklist is empty\n");
 }
 else if(first==last!=NULL)
 {
  free(first);
  first=NULL;
  last=NULL;
  }
  else
  {
    temp=first;
    temp1=temp->next;
    temp1->pre=NULL;
    first=temp1;
    free(temp);
   }
  }
void del_end()
{
  if(first==NULL&&last==NULL)
  {
    printf("list is empty\n");
   }
   else if (first==last!=NULL)
   {
   free(first);
   last=NULL;
   first=NULL;
   }
   else
   {
   temp=last;
   temp1=temp->pre;
   temp1->next=NULL;
   last=temp1;
   free(temp);
   }
}
void del_mid()
{
 int i=1;
 printf("enter the position at which you wish to enter data\n");
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
   temp=temp->next;
  }
  temp1=temp->next;
  temp->next=temp1->next;
  (temp1->next)->pre=temp;
 }
}
void display()
{
 for(temp=first;temp!=NULL;temp=temp->next)
 {
  printf( "data is =%d" , temp->data);
  printf("\n");
 }
 for(temp=last;temp!=NULL;temp=temp->pre)
 {
  printf("data is=%d",temp->data);
  printf("\n");
 }
}
void search()
{
  int num;
  printf("enter data you want to search\n");
  scanf("%d",&num);
  temp=first;
  while(temp!=NULL)
  {
    if (num==temp->data)
     {
      printf("data found=%d",num);
      break;
      }
    }
    if(temp==NULL)
    {
      printf("data not found")
    }
}
void DLL()
{
 int ch=0;
 clrscr();
 while(ch!=9)
 {
  printf("enter your choice 1)insertion at beginning 2) insertion at middle 3) insertion at end 4) deletion at beginning 5) deletion at middle 6) deletion at end 7) display 8)search 9) exit\n");
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
  else if(ch==8)
  {
   search();
  }
  else if(ch==9)
  {
   printf("exit\n");
  }
 }
getch();
}
