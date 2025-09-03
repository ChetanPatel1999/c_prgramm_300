// strcpy() :- its copy one string into another string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[50], ch2[50];
    printf("enter string1 : ");
    gets(ch1); // raj
    printf("string1 : %s\n", ch1);
    printf("string2 : %s\n", ch2);
    strcpy(ch2, ch1);
    printf("string1 : %s\n", ch1);
    printf("string2 : %s\n", ch2);
}