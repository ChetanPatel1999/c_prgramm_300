// wap to count vovel in string
#include <stdio.h>
void main()
{
    char name[] = "chetan patel";
    printf("name = %s\n", name);
    int i, vovel = 0;
    printf("vovel in string : ");
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'u' || name[i] == 'i' || name[i] == 'o')
        {
            printf("%c", name[i]);
            vovel++;
        }
    }
    printf("\ntotal vovel in string : %d", vovel);
}