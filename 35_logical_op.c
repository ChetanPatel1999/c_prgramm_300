#include <stdio.h>
void main()
{
    int ans;
    // ans = 12 > 6 && 67 < 99 && 78 == 78;
    // ans = 12 < 99 || 78 > 98 || 78 == 78;
    ans = !(12 < 66 && 56 > 90);
    printf("ans = %d \n", ans);
}