// read data from file
//  fscanf() :- read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[20];
    int stop;
    ptr = fopen("facto.txt", "r");
    while (1)
    {
        stop = fscanf(ptr, "%s", ch);
        if (stop == EOF)
        {
            break;
        }
        printf("%s ", ch);
    }
    fclose(ptr);
}