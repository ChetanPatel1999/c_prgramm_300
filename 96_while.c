// wap to take a number from user and count number of digit in given number.
#include <stdio.h>
void main()
{
    int num,sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 576
    while (num > 0)
    {
        sum++;
        num = num / 10;
    }
    printf(" digit count in number =  %d", sum);
}