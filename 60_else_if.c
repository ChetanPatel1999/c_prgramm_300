#include <stdio.h>
void main()
{
    int s1, s2, s3;
    printf("enter frist side in cm : ");
    scanf("%d", &s1);
    printf("enter second side in cm : ");
    scanf("%d", &s2);
    printf("enter third side in cm : ");
    scanf("%d", &s3);
    if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
    {
        if (s1 == s2 && s2 == s3)
        {
            printf("tringle is eqilateral");
        }
        else if (s1 == s2 || s2 == s3 || s3 == s1)
        {
            printf("tringle is isoceles");
        }
        else
        {
            printf("tringle is scalen");
        }
    }
    else
    {
        printf("you cant make tringle");
    }
}