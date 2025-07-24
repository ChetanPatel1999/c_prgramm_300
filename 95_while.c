// wap to take a number from user and display sum of individula only even digit.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 34532
    while (num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            sum = sum + rem;
        }
        num = num / 10;
    }
    printf("sum of individual only even digit = %d", sum);
}