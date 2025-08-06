#include <stdio.h>
void add()
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void main()
{
    printf("main fun is start..\n");
    add();
}
