#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter a value = ");
    scanf("%d", &a); // 7
    printf("enter b value = ");
    scanf("%d", &b); // 45
    c = a % b;
    printf("ans = %d", c);
}