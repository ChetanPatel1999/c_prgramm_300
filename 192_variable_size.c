#include <stdio.h>
void main()
{
    int a = 56;          // 4 byte
    short int b = 32800; // 2 byte
    float c;             // 4 byte
    char ch;             // 1byte
    printf("value of b = %d\n", b);
    printf("value of a = %d\n", a);
    printf("address of a = %d\n", &a);
    printf("size of int = %d byte\n", sizeof(a));
    printf("size of short int = %d byte\n", sizeof(b));
    printf("size of float = %d byte\n", sizeof(c));
    printf("size of char = %d byte\n", sizeof(ch));
}