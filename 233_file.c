// fputc() :- its write single char inside file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch = 'k';
    ptr = fopen("abc.txt", "w");
    fputc('p', ptr);
    fputc(ch, ptr);
    fclose(ptr);
}