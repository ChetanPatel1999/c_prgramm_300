// pointer to array
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90}, i;
    int *ptr;
    ptr = &arr[0];
    for (i = 0; i < 5; i++) // 2
    {
        printf("%d ", *ptr);
        ptr++;
    }
}