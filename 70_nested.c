// wap to print greatest num between three numbers without using logical and operator.
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter frist value : ");
    scanf("%d", &num1); // 600
    printf("enter second value : ");
    scanf("%d", &num2); // 2000
    printf("enter third value : ");
    scanf("%d", &num3); // 8000
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("greatest num : %d", num1);
        }
        else
        {
            printf("greatest num : %d", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("greatest num : %d", num2);
        }
        else
        {
            printf("greatest num : %d", num3);
        }
    }
}