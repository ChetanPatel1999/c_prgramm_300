#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 6; i++) // 3
    {
        for (s = i; s < 6; s++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 4 || j == 1 || i == j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}