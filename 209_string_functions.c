// wap to display string length.
#include <stdio.h>
void main()
{
    char ch[50];
    int i, c = 0;
    printf("enter string : ");
    gets(ch); // rameshver
    printf("string : %s\n", ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        c++;
    }
    printf("string length : %d", c);
}