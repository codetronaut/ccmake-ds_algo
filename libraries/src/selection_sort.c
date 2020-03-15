#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,min,temp,a[100];
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements in array: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }

        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
