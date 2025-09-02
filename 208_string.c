// fgets()= its take string from user
// fputs()= its display string at console screen
#include <stdio.h>
void main()
{
    char name[5];
    printf("enter string : ");
    fgets(name, 5, stdin);
    printf("name = %s\n", name);
    fputs(name, stdout);
}