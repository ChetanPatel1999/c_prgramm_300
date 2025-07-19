// wap to print sum 1 to given number.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("enter a number : ");
    scanf("%d", &n);         // 7
    for (i = 1; i <= n; i++) // 6
    {
        sum = sum + i; // 55
    }
    printf("sum 1 to %d = %d ", n, sum);
}