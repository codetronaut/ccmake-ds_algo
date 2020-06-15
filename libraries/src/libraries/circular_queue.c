#include<stdio.h>


#include "libr.h"

int rear=-1,front=-1,que[5];
void dque()
{
 if(front==-1 && rear==-1)
 {
    printf("under flow\n");
 }
 else if(front!=4)
 {
    front++;
    printf("element deleted\n");
 }
 else
 {
    front=0;
    front++;
    printf("element deleted");
 }
}
void eque()
 {
    if(rear==4 && front==0 || rear==front-1)
 {
    printf("overflow\n");
 }
else
 {
    if(rear==-1 && front==-1)
 {
    front++;
    rear++;
 }
 else if (rear==4 && front!=0)
 {
    rear=0;
  }
 else
 {
    rear++;
 }
    printf("enter a number\n");
    scanf("%d",&que[rear]);
 }
}
void display()
{
    int i;
 if(front>rear)
 {
  for(i=front;i<5;i++)
  {
    printf("number is");
    printf("%d",que[i]);
    printf("\n");
  }
  for(i=0;i<=rear;i++)
    {
        printf("number is");
        printf("%d",que[i]);
        printf("\n");
    }
 }
 else
 {
 for(i=front;i<=rear;i++)
 {
    printf("number is");
    printf("%d",que[i]);
    printf("\n");

 }
 }
}
void circular_queue()
{
    int ch=0;
    
while(ch!=4)
{
    printf("enter your choice 1) insert 2) delete 3) display 4) exit\n");
    scanf("%d",&ch);
if(ch==1)
{
    eque();
}
else if(ch==2)
{
    dque();
}
else if(ch==3)
{
    display();
}
else if (ch==4)
{
    printf("end\n");
}
else
{
    printf("error\n");
}
}
}
