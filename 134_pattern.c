#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 1
    {
        for (j = i; j <= 5; j++) //2
        {
            if (i % 2 == 0)
            {
                printf("1 "); // 0 0 0 0 0
            }                 // 1 1 1 1
            else              // 0 0 0 
            {                 // 1 1
                printf("0 "); // 0 
            }
        }
        printf("\n");
    }
}