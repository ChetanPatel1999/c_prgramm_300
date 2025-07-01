// pre/post increment
#include <stdio.h>
void main()
{
    int a = 12, b;

    // b = a++; // post :- its first assign a value in b after that increasea value by one
    b = ++a;                // pre :- first increase a value by one than update value assign in b
    printf(" a = %d\n", a); // 13
    printf(" b = %d\n", b); // 13
}