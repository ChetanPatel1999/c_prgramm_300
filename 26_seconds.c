// wap to convert given second into hours, mintus, remaining second.
#include <stdio.h>
void main()
{
    int second, hours, minute, remsecond;
    printf("enter seconds : ");
    scanf("%d", &second);          // 3765
    hours = second / 3600;         // 1
    minute = (second % 3600) / 60; // 2
    remsecond = (second % 3600) % 60;
    printf("total second :%d\n", second);
    printf("total hours :%d\n", hours);
    printf("total minute :%d\n", minute);
    printf("total remsecond :%d\n", remsecond);
}