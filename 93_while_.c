// wap to take a number  from user and display individula digit in reverse order.
#include <stdio.h>
void main()
{
    int num, rem;
    printf("enter a num : ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        printf("%d\n", rem);
        num = num / 10;
    }
}