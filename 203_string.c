// visit string each character using null character
#include <stdio.h>
void main()
{
    char name[] = "chetan patel";
    printf("name = %s\n", name);
    int i;
    // visit string each character
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        printf("%c ", name[i]);
    }
}