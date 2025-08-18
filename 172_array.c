// wap to print sum of array element.
#include <stdio.h>
void main()
{
    int a[5] = {12, 34, 56, 78, 90};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 4
    {
        printf("%d\n", a[i]);
    }

    int sum = 0;
    for (i = 0; i < 5; i++) //
    {
        sum = sum + a[i];
    }

    printf("sum of array elemenet are = %d ", sum);
}