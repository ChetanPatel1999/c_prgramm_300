// no return type but with parameter
#include <stdio.h>
void table(int n)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("addition = %d\n", c);
}
void cube(int n)
{
    int c;
    c = n * n * n;
    printf("cube of %d = %d\n", n, c);
}
void main()
{
    add(12, 7);
    add(12, 10);
    add(4, 9);
    cube(3);
    table(9);
}