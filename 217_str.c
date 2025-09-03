// strcmp() :- its compare two string if string are same return 0 otherwise 1
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[50], ch2[50];
    printf("enter string1 : ");
    gets(ch1); // raj
    printf("enter string2 : ");
    gets(ch2); // verma
    if (strcmp(ch1, ch2) == 0)
    {
        printf("string are same ");
    }
    else
    {
        printf("string are different");
    }
}