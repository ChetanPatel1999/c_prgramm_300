// awp to find max element from array.
#include <stdio.h>
void main()
{
    int arr1[5] = {12, 345, 88, 3, 56};
    int arr2[10] = {13, 57, 999, 101, 87, 512, 63, 9, 33, 55};
    int max = arr1[0], i;
    printf("array1 element are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    for (i = 0; i < 5; i++) // i=5
    {
        if (max < arr1[i])
        {
            max = arr1[i];
        }
    }
    printf("\nmax element = %d", max);

    printf("\narray2 element are : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }

    max = arr2[0];

    for (i = 0; i < 10; i++)
    {
        if (max < arr2[i])
        {
            max = arr2[i];
        }
    }
    printf("\nmax element : %d", max);
}