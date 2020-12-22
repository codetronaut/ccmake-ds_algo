#include<stdio.h>

#include "libr.h"


int back=-1,fore_part=-1,queue[5];
void deque()
{
 if(back==-1)
 {
    printf("underflow \n");
 }
 else
 {
    fore_part++;
    printf("element deleted\n");
  }
}
void enter_que()
{
    if(back==4)
    {
    printf("overflow\n");
    }
    else
    {
        if(back==-1&&fore_part==-1)
        {
        fore_part++;
        back++;
        printf("enter a number\n");
        scanf("%d",&queue[back]);
        }
        else
        {
            back++;
            printf("enter a number\n");
            scanf("%d",&queue[back]);
        }
    }
}
void disp()
{
 int i;
 printf("display function\n");
 for(i=fore_part;i<=back;i++)
 {
   printf("number is");
   printf("%d",queue[i]);
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
           enter_que();
        }
        else if(ch==2)
        {
            deque();
        }
        else if(ch==3)
        {
            disp();
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

