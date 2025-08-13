// wap to print even number using recursion.
#include <stdio.h>
void evennums()
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d ", i);
    }
    i++;
    if (i <= 20)
    {
        evennums();
    }
}
void main()
{
    evennums();
}