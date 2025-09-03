// strlen() :- its return string length
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[50];
    printf("enter string : ");
    gets(ch); // rameshver
    printf("string : %s\n", ch);
    printf("string length = %d", strlen(ch));
}