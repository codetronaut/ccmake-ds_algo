#include <stdio.h>
#include <string.h>

char inf[30],post[30],stk[30],ch,ch1;
int top = -1, i = 0, j = 0;

void push()
{
	top++;
	stk[top] = ch;
}

char pop()
{
	char ch2;
	ch2 = stk[top];
	top--;
	return ch2;
}

int prio(char ch2)
{
	if (ch2=='+'|| ch2=='-')
	{
		return 1;
	}
	else if (ch2=='*'||ch2=='/')
	{
		return 2;
	}
	else if (ch2=='^')
	{
		return 3;
	}
	else
		return 0;
}

int main()
{
	printf("Enter the Infix Expression: ");
	scanf("%s",&inf);
	strrev(inf);
	while(inf[i] != '\0')
	{
		ch = inf[i];
		switch(ch)
		{
			case ')' : 	push();
						break;

			case '(' : 	ch1 = pop();
						while(ch1 != ')')
						{
							post[j] = ch1;
							j++;
							ch1 = pop();
						}
						break;

			case '+' :
			case '-' :
			case '*' :
			case '/' :
			case '^' :	while(prio(ch) < prio(stk[top]))
						{
							post[j] = pop();
							j++;
						}
						push();
						break;

			default	 :	post[j] = ch;
						j++;
						break;

		}
		i++;
	}
	while(top!=-1)
	{
		post[j] = pop();
		j++;
	}
	printf("Prefix = %s",strrev(post));
	getch();
}
