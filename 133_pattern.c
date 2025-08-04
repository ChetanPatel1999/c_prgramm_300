#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 1
    {
        for (j = 1; j <= i; j++) //2
        {
            if (j % 2 == 0)
            {
                printf("1 "); // 0 
            }                 // 0 1
            else              // 0 1 0 
            {                 // 0 1 0 1
                printf("0 "); // 0 1 0 1 0
            }
        }
        printf("\n");
    }
}