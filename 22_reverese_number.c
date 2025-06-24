// wap to print revesre number of given 2 digit number.
#include <stdio.h>
void main()
{
    int num, r, s, rev;
    printf("enter a num : ");
    scanf("%d", &num); // 45

    r = num / 10; // 4
    s = num % 10; // 5

    rev = r + s * 10;

    printf("reverse number : %d", rev);
}