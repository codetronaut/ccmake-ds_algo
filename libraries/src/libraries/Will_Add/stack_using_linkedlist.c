#include<stdio.h>
#include<malloc.h>

#include "libr.h"

struct node
{
    int data;
    struct node *next;
}*new1,*temp,*top=0;

void push()
{
    new1=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new1->data);
    new1->next=top;
    top=new1;
}

void pop()
{
    temp=top;
    if(top==0)
    {
        printf("Stack is Empty.");
    }
    else
    {
        printf("Deleted item is %d", top->data);
        top=top->next;
        free(temp);
    }
}

void display()
{
    temp=top;
    if(top==0)
    {
        printf("Stack is Empty.");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }
    }
}

void stack_n()
{
    int ch;
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    while(0!=1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: exit(1);
                break;
        }
    }

}
