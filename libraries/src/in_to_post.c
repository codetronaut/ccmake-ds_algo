#include<stdio.h>
#include<conio.h>
char in[30],post[30],stk[30],ch,ch1;
int top=-1,i=0,j=0;

void push(char);
char pop();
int prior(char);

void main()
{
    printf("Enter Infix Expression: ");
    scanf("%s", &in);
    while(in[i]!='\0')
    {
        ch=in[i];
        switch(ch)
        {
            case '(': push(ch);
                break;

            case ')': ch1=pop();
                while(ch1!='(')
                {
                    post[j]=ch1;
                    j++;
                    ch1=pop();
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while(prior(ch)<=prior(stk[top]))
                {
                    post[j]=pop();
                    j++;
                }
                push(ch);
                break;
            default: post[j]=ch;
                j++;
        }
        i++;
    }
    while(top!=-1)
    {
        post[j]=pop();
        j++;
    }
    printf("Postfix = %s", post);
    getch();
}

void push(char ch)
{
    top++;
    stk[top]=ch;
}

char pop()
{
    char ch2;
    ch2=stk[top];
    top--;
    return ch2;
}

int prior(char ch2)
{
    if(ch2=='+'||ch2=='-')
        return 1;
    if(ch2=='*'||ch2=='/')
        return 2;
    if(ch2=='^')
        return 3;
    else
        return 0;
}
