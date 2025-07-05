// wap to check given char is consonant or vovels.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha);
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        printf("alpha is vovel");
    }
    else
    {
        printf("alpha is consonant");
    }
}