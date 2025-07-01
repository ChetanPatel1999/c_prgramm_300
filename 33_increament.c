#include <stdio.h>
void main()
{
    int a = 12;
    printf("a = %d\n", a); // 12

    a++;
    a++;

    ++a;
    ++a;

    printf("a = %d\n", a); // 16

    a--;
    --a;
    printf("a = %d\n", a); // 14
}