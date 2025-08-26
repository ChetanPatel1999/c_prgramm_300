// pointer to array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i;
    int *ptr, *temp;
    ptr = malloc(20);
    temp = ptr;
    printf("enter array element : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr = temp;
    printf("display array element : ");
    for (i = 0; i < 5; i++) // 2
    {
        printf("%d ", *ptr);
        ptr++;
    }
    int sum = 0;
    ptr = temp;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("sum of dynamic array element are : %d", sum);
    ptr = temp;
    free(ptr);
}