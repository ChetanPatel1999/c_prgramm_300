// example of globle and local variable
#include <stdio.h>
int g = 90; // global variable
void fun()
{
    int b = 67; // local variable
    printf("b = %d\n", b);
    printf("g = %d\n", g);
    // printf("a = %d\n", a); // show error
}
void main()
{
    int a = 12; // local variable
    printf("a = %d\n", a);
    printf("g = %d\n", g);
    // printf("b = %d\n", b); // show error
    fun();
}