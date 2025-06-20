// wap to find reactangle area.
#include <stdio.h>
void main()
{
    float length, width, area;
    printf("reactangle area calculator ...\n");
    printf("enter length :- ");
    scanf("%f", &length);
    printf("enter width :- ");
    scanf("%f", &width);
    area = length * width;
    printf("area of reactangle which length is %.1f and width is %.1f = %.1f",length,width,area);
}