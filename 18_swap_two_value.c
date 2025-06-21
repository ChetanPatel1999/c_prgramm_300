// Write a program to swap any two numbers using third variable.
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter value of a = ");
    scanf("%d", &a);
    printf("enter value of b = ");
    scanf("%d", &b);

    printf("before swapping : \n");
    printf("value of a = %d\n", a);
    printf("value of b = %d\n\n", b);
    
    c = a;
    a = b;
    b = c;

    printf("after swapping : \n");
    printf("value of a = %d\n", a);
    printf("value of b = %d\n", b);
}