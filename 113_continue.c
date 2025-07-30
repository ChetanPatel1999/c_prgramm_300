// wap to print odd numbers using continue
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 30; i++) // 5
    {
        if (i % 4 == 0)
        {
            continue;
        }
        printf("%d\n", i); // 1 2 3 5 6 7 9 10 11 -----30
    }
}