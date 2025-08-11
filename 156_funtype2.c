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
void greatest(int a, int b)
{
    if (a > b)
    {
        printf("greatest num : %d", a);
    }
    else
    {
        printf("greatest num : %d", b);
    }
}
void factorial(int num) // 5
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", num, fact);
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++)
    {
        factorial(i);
    }
}
void main()
{
    // int x = 100, y = 200;
    // add(x, y);
    // add(12, 7);
    // add(12, 10);
    // add(4, 9);
    // cube(3);
    // table(9);
    // greatest(66, 13);
    // factorial(5);
    range(1, 5);
    printf("--------------------\n");
    range(3, 8);
}