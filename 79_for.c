//wap to print even number series 1 to 30.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 30; i++)//4
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}