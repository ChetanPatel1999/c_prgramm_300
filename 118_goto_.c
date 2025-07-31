#include <stdio.h>
void main()
{
    int i = 1;
    printf("hello students..\n");
    i++;
    if (i <= 5)
    {
        goto lab;
    }
    printf("my name is chetan\n");
lab:
    printf("after lable ...");
}