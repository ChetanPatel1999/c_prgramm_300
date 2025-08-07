// no return type no parameter
#include <stdio.h>
void table()
{
    int n, i;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
void add()
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void cube()
{
    int n, c;
    printf("enter a num : ");
    scanf("%d", &n);
    c = n * n * n;
    printf("cube of %d = %d", n, c);
}
void main()
{
    cube();
}