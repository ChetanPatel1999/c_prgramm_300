//wap to print multiple of 4   1 to 30.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 30; i++)//4
    {
        if (i % 4 == 0)
        {
            printf("%d ", i);
        }
    }
}