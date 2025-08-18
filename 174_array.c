// how to take array element from user
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n);
    int a[n];
    int i;
    printf("enter array elements : \n");
    for (i = 0; i < n; i++) // 4
    {
        scanf("%d", &a[i]);
    }
    printf("array element are : \n");
    for (i = 0; i < n; i++) // 4
    {
        printf("%d ", a[i]);
    }
}