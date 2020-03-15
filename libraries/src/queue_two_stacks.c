#include<stdio.h>
#include<conio.h>
#define size 5

int stk1[size], stk2[size];
int top1=-1,top2=-1;
int count=0;

void push1(int data)
{
    if(top1 == size-1)
    {
        printf("Overflow.\n");
    }
    else
    {
        top1++;
        stk1[top1]= data;
    }
}

void push2(int data)
{
    if(top2 == size-1)
    {
        printf("Overflow.\n");
    }
    else
    {
        top2++;
        stk2[top2]= data;
    }
}

int pop1()
{
    return stk1[top1--];
}

int pop2()
{
    return stk2[top2--];
}

void enqueue()
{
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    push1(data);
    count++;
}

void dequeue()
{
    int i,a,b;
    if(top1==-1 && top2==-1)
        printf("Queue is empty.");
    else
    {
        for(i=0;i<count;i++)
        {
            a=pop1();
            push2(a);
        }
        b=pop2();
        printf("%d Deleted\n",b);
        count--;
        for(i=0;i<count;i++)
        {
            a=pop2();
            push1(a);
        }
    }
}

void display()
{
    int i;
    if(top1==-1 && top2==-1)
    {
        printf("Queue is empty.");
    }
    else
    {
        for(i=0;i<=top1;i++)
        {
            printf("%d ", stk1[i]);
        }
        printf("\n");
    }
}

void main()
{
    int ch;
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
    while(0!=1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: enqueue();
                break;
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: exit(1);
                break;
        }
    }
    getch();
}
