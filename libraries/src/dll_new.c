#include<stdio.h>
#include<conio.h>
#include<malloc.h>

int count;
struct node
{
    char data[20];
    struct node *next;
    struct node *prev;
}*new1,*first,*last,*temp;

void insert_at_first();
/*void insert_at_mid();
void insert_at_last();
void delete_at_first();
void delete_at_mid();
void delete_at_last();
void display();
void search();*/

void main()
{
    int ch;
    first=NULL;
    last=NULL;
    printf("1. Insert at first\n2. Insert at last\n3. Insert at mid\n4. Delete at first\n5. Delete at last\n6. Delete at mid\n7. Display\n8. Search");
    do
    {
        printf("\nEnter choice 1-8? ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert_at_first();
                break;
            /*case 2: insert_at_mid();
                break;
            case 3: insert_at_last();
                break;
            case 4: delete_at_first();
                break;
            case 5: delete_at_mid();
                break;
            case 6: delete_at_last();
                break;
            case 7: display();
                break;
            case 8: search();
                break;*/
        }
    }while(ch!=0);
}

void insert_at_first()
{
    new1 = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%s", &new1->data);
    if (first==NULL)
    {
        first = new1;
        last = new1;
        new1->next = NULL;
        new1->prev = NULL;
    }
    else
    {
        new1->next = first;
        first->prev = new1;
        new1->prev = NULL;
        first = new1;
    }
}

