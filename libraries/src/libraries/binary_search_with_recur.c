#include<stdio.h>

#include "libr.h"

void binary_search(int [], int, int, int);
void bubble_sort(int [], int);

void binary_search_with_recur()
{
    int k, n, i;
    int list[25];

    printf("Enter size of a list: ");
    scanf("%d", &n);
    printf("Enter elements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&list[i]);
    }
    bubble_sort(list, n);
    printf("\n");
    printf("Enter key to search\n");
    scanf("%d", &k);
    binary_search(list, 0, n, k);

}

void bubble_sort(int list[], int n)
{
    int temp, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

void binary_search(int list[], int low, int high, int k)
{
    int mid;

    if (low > high)
    {
        printf("Key not found\n");
        return;
    }
    mid = (low + high) / 2;
    if (list[mid] == k)
    {
        printf("Key found\n");
    }
    else if (list[mid] > k)
    {
        binary_search(list, low, mid - 1, k);
    }
    else if (list[mid] < k)
    {
        binary_search(list, mid + 1, high, k);
    }
}
