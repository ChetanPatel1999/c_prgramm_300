// strupr() :- its convert string in upper case
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50];
    printf("enter string : ");
    gets(ch); // ram
    printf("string : %s\n", ch);
    strupr(ch);
    printf("upper string : %s\n", ch);
}