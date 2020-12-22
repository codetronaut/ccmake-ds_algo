#include <stdio.h>
#include <string.h>

#include "libr.h"

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

char inf[30],post[30],stack[30],ch,ch1;
int stk_top = -1, i = 0, j = 0;

void push()
{
	stk_top++;
	stack[stk_top] = ch;
}

char pop()
{
	char ch2;
	ch2 = stack[stk_top];
	stk_top--;
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

void in_to_pre()
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
			case '^' :	while(prio(ch) < prio(stack[stk_top]))
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
	while(stk_top!=-1)
	{
		post[j] = pop();
		j++;
	}
	printf("Prefix = %s",strrev(post));
	 
}