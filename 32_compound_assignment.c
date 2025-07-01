// compound assignment
#include <stdio.h>
void main()
{
    int a, b;
    a = 12, b = 8;
    printf(" a = %d\n", a);   // 12
    printf(" b = %d\n\n", b); // 5

    // a += b;
    // a *= b;
    // b *= b;
    // b -= a;
    // a = +b;
    // a = -b;
    // a /= b;
    // a %= b;
    a %= a;
    printf(" a = %d\n", a); // 0
    printf(" b = %d\n", b); // 8
}
