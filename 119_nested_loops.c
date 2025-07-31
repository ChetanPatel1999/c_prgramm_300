// nested loops
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 3; i++) // 6
    {
        for (j = 1; j <= 3; j++) // 6
        {
            printf("hello world institute\n"); // 10
        }
        printf("----------------------------\n");
    }
}