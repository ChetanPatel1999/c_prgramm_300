#include <stdio.h>
void main()
{
    static int i = 1;
    printf("%d. hello world institute\n", i);
    i++;
    if (i <= 5)
    {
        main();
    }
}