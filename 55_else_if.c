// Write a program to accept a number and check if it is positive , nagative or zero.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 0
    if (num > 0)
    {
        printf("num is positive");
    }
    else if (num < 0)
    {
        printf("num is nagative");
    }
    else 
    {
        printf("num is zero");
    }
}