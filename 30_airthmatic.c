#include <stdio.h>
void main()
{
    int a, b, ans;
    a = 12;
    b = 6;
    ans = a + b;
    printf("addition = %d\n", ans);

    ans = a - b;
    printf("subtraction = %d\n", ans);

    ans = a * b;
    printf("multiplication = %d\n", ans);

    ans = a / b;
    printf("division = %d\n", ans);

    ans = a % b;
    printf("reminder = %d", ans);
}
