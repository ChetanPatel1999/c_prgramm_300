// structure array example
#include <stdio.h>
#include <string.h>
struct pen
{
    char name[20];
    int price;
    float rating;
};
void below_5_pen(struct pen hellop[], int n)
{
    int i;
    printf("belove 5 rs pen : \n");
    for (i = 0; i < n; i++)
    {
        if (hellop[i].price < 5)
        {
            printf("%s\n", hellop[i].name);
        }
    }
}
void main()
{
    struct pen p[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("enter pen info : \n");
        printf("enter pen name : ");
        scanf("%s", p[i].name);
        printf("enter pen price : ");
        scanf("%d", &p[i].price);
        printf("enter pen rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 3; i++)
    {
        printf("pen info :- \n");
        printf("pen name : %s\n", p[i].name);
        printf("pen price : %d\n", p[i].price);
        printf("pen rating : %.1f\n", p[i].rating);
        printf("--------------------------------\n");
    }
    below_5_pen(p, 3);
}