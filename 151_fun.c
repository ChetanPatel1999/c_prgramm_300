#include <stdio.h>
void add()
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void sub()
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a - b;
    printf("subtraction = %d\n", c);
}
void mul()
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a * b;
    printf("multiplication = %d\n", c);
}
void div()
{
    int a, b, c;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a / b;
    printf("division = %d\n", c);
}
void main()
{
    int num;
    printf("welcome to my calculator...\n");
    printf("pess 1 to add\n");
    printf("pess 2 to sub\n");
    printf("pess 3 to mul\n");
    printf("pess 4 to div\n");
    printf("press number : ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;
    default:
        printf("please enter 1 to 4");
    }
}