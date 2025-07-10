//  Write a  program to check whether a character is uppercase alphabet or lowercase
// alphabet or not alphabet.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("char is uppercase alpha");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("char is lowercase alpha");
    }
    else
    {
        printf("char is not alpha");
    }
}