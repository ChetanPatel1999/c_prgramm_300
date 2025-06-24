// wap to print revesre number of given 3 digit number.
#include <stdio.h>
void main()
{
    int num, r, s, t, rev;
    printf("enter a num : ");
    scanf("%d", &num); // 456

    r = num / 100;       // 4
    s = (num / 10) % 10; // 5
    t = num % 10;

    rev = r + s * 10 + t * 100;

    printf("reverse number : %d", rev);
}