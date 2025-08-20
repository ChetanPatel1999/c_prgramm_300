// awp to find max element from array.
// using function
#include <stdio.h>
void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void find_max(int arr[], int n)
{
    int max = arr[0], i;
    for (i = 0; i < n; i++) // i=5
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nmax element = %d", max);
}
void main()
{
    int arr1[5] = {12, 345, 88, 3, 56};
    int arr2[10] = {13, 57, 999, 101, 87, 512, 63, 9, 33, 55};

    printf("array1 element are : ");
    display(arr1, 5);
    find_max(arr1, 5);
    printf("\narray2 element are : ");
    display(arr2, 10);
    find_max(arr2, 10);
}