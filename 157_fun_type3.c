#include <stdio.h>
// with return type with parameter.
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int cube(int num)
{
    return num * num * num;
}
void main()
{
    int res = add(34, 30);
    printf("sum = %d\n", res);

    printf("sum = %d\n", add(3, 200));

    printf("cube of 3 = %d\n", cube(3));
    printf("cube of 4 = %d\n", cube(4));
    printf("cube of 5 = %d\n", cube(5));
}