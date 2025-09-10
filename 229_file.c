// read data from file
//  fscanf() :- read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[20];
    ptr = fopen("facto.txt", "r");
    fscanf(ptr, "%s", ch);
    printf("%s ", ch);
    fscanf(ptr, "%s", ch);
    printf("%s ", ch);
    fclose(ptr);
}