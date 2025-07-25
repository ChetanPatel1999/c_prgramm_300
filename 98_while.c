// wap to given number is plindrom or not.
#include <stdio.h>
void main()
{
    int num, reverse = 0, rem, temp;
    printf("enter a num : ");
    scanf("%d", &num); // 123
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    if (reverse == temp)
    {
        printf("num is plindrom");
    }
    else
    {
        printf("num is not plindrom");
    }
}