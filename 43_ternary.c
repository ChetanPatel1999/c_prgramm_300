// wap to check given number is odd or even.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);

    num % 2 == 0 ? printf("num is even") : printf("num is odd");
}