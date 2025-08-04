#include <stdio.h>
void main()
{
    int i, j;
    for (i = 65; i <= 69; i++) // 1
    {
        for (j = 65; j <= 69; j++) // 2
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}