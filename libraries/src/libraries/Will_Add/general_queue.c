#include<stdio.h>

#include "libr.h"


int rear=-1,front=-1,que[5];
void dque()
{
 if(rear==-1)
 {
    printf("underflow \n");
 }
 else
 {
    front++;
    printf("element deleted\n");
  }
}
void eque()
{
    if(rear==4)
    {
    printf("overflow\n");
    }
    else
    {
        if(rear==-1&&front==-1)
        {
        front++;
        rear++;
        printf("enter a number\n");
        scanf("%d",&que[rear]);
        }
        else
        {
            rear++;
            printf("enter a number\n");
            scanf("%d",&que[rear]);
        }
    }
}
void display()
{
 int i;
 printf("display function\n");
 for(i=front;i<=rear;i++)
 {
   printf("number is");
   printf("%d",que[i]);
   printf("\n");
  }
 }
void general_queue()
{
    int ch=0;
    
    while(ch!=4)
    {
        printf("enter choice 1)input 2)delete 3) display 4) EXIT\n");
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
        else if(ch==4)
        {
            printf("exit");
        }
        else
        {
            printf("error\n");
        }
    }
    
}

