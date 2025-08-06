#include <stdio.h>
void add(); // function declaration
void sub();
void main()
{
    printf("main fun is start..\n");
    add(); // function calling

    add();
    printf("main function is end");
}
void add() // function defination
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void sub() // function defination
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a - b;
    printf("subtraction = %d\n", c);
}