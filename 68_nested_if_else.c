// write  a programm to check given number is
// even-positive or even nagative,
//  or odd positive or odd nagative.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);//9
    if (num % 2 == 0)
    {
        if (num > 0)
        {
            printf("even-positive");
        }
        else
        {
            printf("even-nagative");
        }
    }
    else
    {
        if (num > 0)
        {
            printf("odd-positive");
        }
        else
        {
            printf("odd-nagative");
        }
    }
}