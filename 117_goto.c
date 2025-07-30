// wap to print even number 1 to 10 using goto stmt.
#include <stdio.h>
void main()
{
    int i = 1;
lab:
    if (i % 2 == 0)
    {
        printf("%d\n", i);
    }
    i++; // 6
    if (i <= 10)
    {
        goto lab;
    }
}