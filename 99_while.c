// wap to check given number is perfect or not.
#include <stdio.h>
void main()
{
    int num, res = 0, n = 1;
    printf("enter a num :");
    scanf("%d", &num);
    while (n <= num)
    {
        if (num % n == 0)
        {
            res = res + n; // 56
        }
        n++; // 29
    }
    if (res == num + num)
    {
        printf("perfact num");
    }
    else
    {
        printf("not perfact num");
    }
}