// array element print using while loop
#include <stdio.h>
void main()
{
    int a[5] = {12, 34, 56, 78, 90};
    int i = 0;
    printf("array element are : \n");
    while (i < 5) // 4
    {
        printf("%d\n", a[i]);
        i++;
    }
}