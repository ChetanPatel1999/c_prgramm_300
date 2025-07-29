// wap to search a digit in given number.
#include <stdio.h>
void main()
{
    int d, n, rem, f = 0;
    printf("enter number : ");
    scanf("%d", &n); // 5646745
    printf("enter digit : ");
    scanf("%d", &d); // 5
    while (n > 0)
    {
        rem = n % 10;
        if (rem == d)
        {
            f = 1;
            break;
        }
        n = n / 10;
    }

    if (f == 1)
    {
        printf("digit is found");
    }
    else
    {
        printf("digit is not found");
    }
}