// wap to print only even element from given array.
#include <stdio.h>
void main()
{
    int arr[5], i;
    printf("enter array element : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    int c = 0;
    printf("\narray even element are : ");
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            c++;
            printf("%d ", arr[i]);
        }
    }
    printf("\ntotal even element count : %d", c);
}