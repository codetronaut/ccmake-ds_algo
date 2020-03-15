#include<stdio.h>
#include<conio.h>
void enq();
void deq();
void display();
int f=-1,r=-1,q[5],item;
void main()
{
    int ch;
    printf("1. Enqueue\n");
    printf("2. dequeue\n");
    printf("3. Display\n");
    while(ch!=4)
    {
    printf("\nSelect your choice-\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: enq();
            break;
        case 2: deq();
            break;
        case 3: display();
            break;
        default: printf("Enter a valid choice!");
    }
    }
    getch();
}
void enq()
{
    if(r==4)
    {
        printf("Queue overflow\n");
    }
    else
    {
       if(f==-1&&r==-1)
        {
            f++;
        }
        r++;
        printf("Enter data: \n");
        scanf("%d",&item);
        q[r]=item;
    }
}
void deq()
{
    if(f==-1)
    {
        printf("Queue underflow\n");
    }
    else
    {
        printf("Deleted Element is %d\n",q[f]);
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
        {
            f+=1;
        }
    }
}
void display()
{
    int i;
    if(f==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("\nQueue is: \n");
		for(i=f;i<=r;i++)
			printf("%d  ",q[i]);
			printf("\n");
    }
}
