// Write a program to swap any two numbers without using third variable.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter value of a = ");
    scanf("%d", &a); // 12
    printf("enter value of b = ");
    scanf("%d", &b); // 5

    printf("before swapping : \n");
    printf("value of a = %d\n", a);   // 12
    printf("value of b = %d\n\n", b); // 5

    // a = a + b; // 17
    // b = a - b; // 12
    // a = a - b; // 5

    a = a * b;
    b = a / b;
    a = a / b;

    printf("after swapping : \n");
    printf("value of a = %d\n", a);
    printf("value of b = %d\n", b);
}