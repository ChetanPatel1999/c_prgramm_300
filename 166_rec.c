// wap to print factors of given number using recursion.
#include <stdio.h>
void factors(int num)
{
    static int i = 1;
    if (num % i == 0)
    {
        printf("%d ", i);
    }
    i++; // 3
    if (i <= num)
    {
        factors(num);
    }
}
void main()
{
    factors(12);
}