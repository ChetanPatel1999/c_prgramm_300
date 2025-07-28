// example of break stmnt :-
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 4
    {
        printf("%d\n", i); // 1  1 2  2  3  3  4
        if (i % 4 == 0)
        {
            break;
        }
        printf("%d\n", i);
    }
}