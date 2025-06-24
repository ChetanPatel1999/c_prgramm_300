//. Write a program to find sum of individuals digits of any four digits number.
#include <stdio.h>
void main()
{
    int num, r, s, t, u, sum;
    printf("enter a num : ");
    scanf("%d", &num); // 4325

    r = num / 1000;
    s = (num % 1000) / 100;
    t = (num % 100) / 10;
    u = num % 10;
    sum = r + s + t + u;
    printf("sum of individula digit : %d", sum);
}