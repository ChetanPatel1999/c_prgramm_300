// write a program to take tow integer value from user and check they are same or different.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a value = ");
    scanf("%d", &a);
    printf("enter b value = ");
    scanf("%d", &b);

    a == b ? printf("num are same") : printf("num are different");
}