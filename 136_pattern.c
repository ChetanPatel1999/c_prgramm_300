#include <stdio.h>
void main()
{
    int i, j;
    for (i = 'A'; i <= 'E'; i++) // 1
    {
        for (j = 'A'; j <= 'E'; j++) // 2
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}