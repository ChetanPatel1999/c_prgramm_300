// constant variable example :-
#include <stdio.h>
void main()
{
    const int a = 12;
    printf("a = %d\n", a);
    // a = 90; show error
    printf("a = %d\n", a);

    const float pi = 3.141;
    float radius = 3.4;
    float area = pi * radius * radius;
    printf("area = %.1f", area);
}