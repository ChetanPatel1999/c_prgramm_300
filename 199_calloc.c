// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n;
    printf("enter dyanamic array size : ");
    scanf("%d", &n);
    int *ptr, *temp;
    ptr = (int *)calloc(n, sizeof(int));
    temp = ptr;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr = temp;
    printf("display array element : ");
    for (i = 0; i < n; i++) // 2
    {
        printf("%d ", *ptr);
        ptr++;
    }
    int sum = 0;
    ptr = temp;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum of dynamic array element are : %d", sum);
    ptr = temp;
    free(ptr);
}