//wap to convert given seconds into hours, minute, reamainig seconds.
#include <stdio.h>
void main()
{
    int days, year, month, week, remdays, rem;
    printf("enter days = ");
    scanf("%d", &days); // 527
    year = days / 365;
    rem = days % 365;
    month = rem / 30;
    rem = rem % 30;
    week = rem / 7;
    remdays = rem % 7;

    printf("total days = %d\n", days);
    printf("year = %d\n", year);
    printf("month = %d\n", month);
    printf("week = %d\n", week);
    printf("remdays = %d\n", remdays);
}