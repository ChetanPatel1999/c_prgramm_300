// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter num1 : ");
    scanf("%d", &num1); // 89
    printf("enter num2 : ");
    scanf("%d", &num2); // 666
    num1 > num2 ? printf("greatest num = %d\n", num1) : printf("greatest num = %d\n", num2);
    num1 > num2 ? printf("%d is greater than %d\n", num1,num2) : printf("%d is greater than %d\n", num2,num1);
}