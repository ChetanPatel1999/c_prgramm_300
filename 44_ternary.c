// wap to check given number is divisible by 5 or not.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 50

    num % 5 == 0 ? printf("divisible by 5") : printf("not divisible by 5");
}