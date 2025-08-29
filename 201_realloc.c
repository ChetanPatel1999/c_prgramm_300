#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n1, n2, *ptr, *temp, i;
    printf("enter array size : ");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    temp = ptr;
    printf("address of dynamic array : ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    printf("\nenter increasing array size : ");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2 * sizeof(int));
    temp = ptr;
    printf("address of incresing dynamic array : ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    free(ptr);
}