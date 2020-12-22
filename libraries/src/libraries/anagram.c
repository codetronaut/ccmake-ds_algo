#include<stdio.h>
#include<string.h>

#include "libr.h"

int m,n;
char string1[26],string2[26];
void check();
void sort();
void input();
void length();

void input()
{
    printf("Enter the elements: ");
    scanf("%s", &string1);
    printf("Enter the elements: ");
    scanf("%s", &string2);
}
void length()
{
    m=strlen(string1);
    n=strlen(string2);
    if(m==n)
    {
        sort();
        check();
    }
    else
    {
        printf("Not equal in length, So they are not anagram");
    }
}
void sort()
{
    int i=0,j,temp;
    for(j=0;j<m;j++)
    {
        for(i=j+1;i<m;i++)
        {
            if(string1[j]>string1[i])
            {
                temp=string1[j];
                string1[j]=string1[i];
                string1[i]=temp;
            }
        }
    }
    printf("%s\n",string1);

    for(j=0;j<n;j++)
    {
        for(i=j+1;i<n;i++)
        {
            if(string2[j]>string2[i])
            {
                temp=string2[j];
                string2[j]=string2[i];
                string2[i]=temp;
            }
        }
    }
    printf("%s\n",string2);
}
void check()
{
    if(strcmp(string1,string2)==0)
    {
        printf("anagram\n");
    }
}
void anagram()
{
	printf("Let's Find Out!\n:");	
	input();
    	length();
}

