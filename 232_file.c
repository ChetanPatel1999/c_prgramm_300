// fgetc():= its read single char from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("facto.txt", "r");
    printf("%d\n", ftell(ptr)); // its return pointer current position.
    fseek(ptr, 15, SEEK_SET);   // its set pointer positon in file
    printf("%d\n", ftell(ptr));
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    rewind(ptr); // its set pointer position at the begning of file
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);
}