// wap to print sum  1 to n multiple of 3 .
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("enter a number : ");
    scanf("%d", &n); // 6
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    printf("sum 1 to %d = %d ", n, sum);
}