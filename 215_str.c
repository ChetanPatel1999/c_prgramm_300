// strcat() :- its combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[50], ch2[50];
    printf("enter string1 : ");
    gets(ch1); // raj
    printf("enter string2 : ");
    gets(ch2); // verma
    printf("string1 : %s\n", ch1);
    printf("string2 : %s\n", ch2);
    strcat(ch1, ch2);
    printf("string1 : %s\n", ch1);
    printf("string2 : %s\n", ch2);
}