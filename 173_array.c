// how to take array element from user
#include <stdio.h>
void main()
{
    int a[5];
    int i;
    printf("enter array elements : \n");
    for (i = 0; i < 5; i++) // 4
    {
        scanf("%d", &a[i]);
    }
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 4
    {
        printf("%d ", a[i]);
    }
}