// wap to print odd numbers using continue
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 5
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i);//1 3 5 7 9  
    }
}