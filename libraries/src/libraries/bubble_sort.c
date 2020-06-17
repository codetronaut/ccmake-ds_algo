#include<stdio.h>

#include "libr.h"

void bubble_sort()
{
    int a[10],i,j,temp,n;
    printf("Enter the no.of Elements to Sort: \n");
    scanf("%d",&n);
    printf("Enter the Elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
