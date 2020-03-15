#include<stdio.h>
#include<conio.h>
char post[30],ch;
int top=-1,i=0,stk[30],A,B,C;

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

void main()
{
    printf("Enter Postfix Expression: ");
    scanf("%s", &post);

    while(post[i]!='\0')
    {
        ch=post[i];
        switch(ch)
        {
        case '+':   B=pop();
                    A=pop();
                    C=A+B;
                    push(C);
                    break;
         case '-':   B=pop();
                    A=pop();
                    C=A-B;
                    push(C);
                    break;
        case '*':   B=pop();
                    A=pop();
                    C=A*B;
                    push(C);
                    break;
        case '/':   B=pop();
                    A=pop();
                    C=A/B;
                    push(C);
                    break;
        case '^':   B=pop();
                    A=pop();
                    C=A^B;
                    push(C);
                    break;
        default: C = ch - '0';
                    push(C);
        }
        i++;
    }
    printf("Result = %d", stk[top]);
    getch();
}
