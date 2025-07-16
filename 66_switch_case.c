// wap to check given char is consonant or vovels.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha); // e
    switch (alpha)
    {
    case 'a':;
    case 'e':;
    case 'i':;
    case 'o':;
    case 'u':
        printf("alphabet is vovel");
        break;
    default:
        printf("alphabet is consonant");
        break;
    }
}