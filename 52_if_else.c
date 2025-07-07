// Write a program to accept two numbers and check if the first is a multiple of the
// second.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter first num : ");
    scanf("%d",&a);
    printf("enter second num : ");
    scanf("%d",&b);
    if (a % b == 0)
    {
        printf("%d is multiple of %d", a, b);
    }
    else
    {
        printf("frist num is not multiple of second num");
    }
}