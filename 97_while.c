//wap to print revesre number of given number
#include <stdio.h>
void main()
{
    int num, reverse = 0, rem;
    printf("enter a num : ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;               // 3
        reverse = reverse * 10 + rem; // 523
        num = num / 10;               // 0
    }
    printf("reverse number = %d", reverse);
}