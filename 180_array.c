// wap to print array element in reverse order.
#include <stdio.h>
void display(int arr[], int n)
{
    printf("array element are : ");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n)
{
    printf("array element in reverse order : ");
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr1[5] = {23, 4, 2, 67, 8};
    display(arr1, 5);
    reverse(arr1, 5);

    int arr2[7] = {3, 5, 2, 6, 7, 88, 69};
    reverse(arr2, 7);
}