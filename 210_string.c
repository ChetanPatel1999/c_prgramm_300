// wap to make a function which return string length.
#include <stdio.h>
int length(char ch[])
{
    int i, c = 0;
    for (i = 0; ch[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}
void main()
{
    char ch[50];
    printf("enter string : ");
    gets(ch); // rameshver
    printf("string : %s\n", ch);
    printf("string length : %d", length(ch));
}