// fputs() :- its write string inside file
// fgets() :- its read one line string from file.
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[50];
    ptr = fopen("facto.txt", "r");
    fgets(ch, 30, ptr);
    printf("%s", ch);
    fgets(ch, 30, ptr);
    printf("%s", ch);
    fclose(ptr);
}