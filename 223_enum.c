// enum :- enum is used to  store integer constant .
#include <stdio.h>
enum days
{
    mon = 15,
    tue,
    wed,
    thu = 9,
    fri = 'a',
    sat,
    sun
};
void main()
{
    int a;
    a = mon + 8;
    printf("a = %d\n", a);
    printf("mon = %d\n", mon);
    printf("tue = %d\n", tue);
    printf("wed = %d\n", wed);
    printf("thu = %d\n", thu);
    printf("fri = %d\n", fri);
    printf("sat = %d\n", sat);
    printf("sun = %d\n", sun);
}