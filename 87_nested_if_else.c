// wap to find greatest number between four number without using logical and operator.
#include <stdio.h>
void main()
{
    int n1, n2, n3, n4;
    printf("enter n1 : ");
    scanf("%d", &n1);
    printf("enter n2 : ");
    scanf("%d", &n2);
    printf("enter n3 : ");
    scanf("%d", &n3);
    printf("enter n4 : ");
    scanf("%d", &n4);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            if (n1 > n4)
            {
                printf("greatest num = %d", n1);
            }
            else
            {
                printf("greatest num = %d", n4);
            }
        }
        else
        {
            if (n3 > n4)
            {
                printf("greatest num = %d", n3);
            }
            else
            {
                printf("greatest num = %d", n4);
            }
        }
    }
    else
    {
        if (n2 > n3)
        {
            if (n2 > n4)
            {
                printf("greatest num = %d", n2);
            }
            else
            {
                printf("greatest num = %d", n4);
            }
        }
        else
        {
            if (n3 > n4)
            {
                printf("greatest num = %d", n3);
            }
            else
            {
                printf("greatest num = %d", n4);
            }
        }
    }
}