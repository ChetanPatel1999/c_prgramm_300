// Write a program to calculate area of triangle.
#include <stdio.h>
void main()
{
    float base, height, area;
    printf("enter base : ");
    scanf("%f", &base);
    printf("enter height : ");
    scanf("%f", &height);
    area = 1 / 2.0 * base * height;
    printf("tringle area : %.2f", area);
}