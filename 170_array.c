// array element print using for loop
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
    a[3] = 900; // change single array element
    printf("array element are after changed : \n");
    for (i = 0; i < 5; i++) // 4
    {
        printf("%d\n", a[i]);
    }
}