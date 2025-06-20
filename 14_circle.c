//wap to print area of circle.
#include<stdio.h>
void main()
{
     float radius, area;
     printf("enter a radius : ");
     scanf("%f",&radius); 
     area=3.141*radius*radius;
     printf("area of circle which radius is %.1f = %.1f ",radius,area);
}
