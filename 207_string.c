// gets()= its take string from user
// puts()= its display string at console screen
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter string : ");
    gets(name);
    printf("name = %s\n", name);
    puts(name);
}