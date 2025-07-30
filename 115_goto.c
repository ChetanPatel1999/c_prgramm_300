#include <stdio.h>
void main()
{
    int i = 1;
lab:
    printf("hello student\n");
    i++; // 6
    if (i <= 5)
    {
        goto lab;
    }
}