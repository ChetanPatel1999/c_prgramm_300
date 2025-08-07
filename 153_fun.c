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
void main()
{
    table();
}