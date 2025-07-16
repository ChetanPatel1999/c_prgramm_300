// Write a program using switch-case to print your friend's name based on the
// first letter of their name.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter first latter of name : ");
    scanf("%c", &ch); //p
    switch (ch)
    {
    case 'n':
        printf("nakul sharma");
        break;
    case 'p':
        printf("pankaj varma");
        break;
    case 'a':
        printf("anjali gupta");
        break;
    case 'd':
        printf("divya yadav");
        break;
    default:
        printf("no one friend which name start from %c", ch);
    }
}