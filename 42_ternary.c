// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int num1, num2, res;
    printf("enter num1 : ");
    scanf("%d", &num1); // 89
    printf("enter num2 : ");
    scanf("%d", &num2); // 6

    res = num1 > num2 ? num1 : num2;

    printf("greatest num : %d", res);
}