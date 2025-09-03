// strlwr() :- its convert string in lower case
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50];
    printf("enter string : ");
    gets(ch); // ram
    printf("string : %s\n", ch);
    strlwr(ch);
    printf("lower string : %s\n", ch);
}