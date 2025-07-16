// wap to check given char is consonant or vovels.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha);
    switch (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
    case 1:
        printf("alphabet is vovel");
        break;
    case 0:
        printf("alphabet is consonant");
        break;
    }
}