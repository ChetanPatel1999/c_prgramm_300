// structure example
#include <stdio.h>
#include <string.h>
struct pen
{
    char name[20];
    int price;
    float rating;
};
void main()
{
    struct pen p1, p2, p3 = {"cello", 10, 4.1};
    strcpy(p1.name, "parker");
    p1.price = 5;
    p1.rating = 4.3;

    strcpy(p2.name, "goldex");
    p2.price = 15;
    p2.rating = 3.3;

    printf("pen info :- \n");
    printf("pen name : %s\n", p1.name);
    printf("pen price : %d\n", p1.price);
    printf("pen rating : %.1f\n", p1.rating);

    printf("pen info :- \n");
    printf("pen name : %s\n", p2.name);
    printf("pen price : %d\n", p2.price);
    printf("pen rating : %.1f\n", p2.rating);

    printf("pen info :- \n");
    printf("pen name : %s\n", p3.name);
    printf("pen price : %d\n", p3.price);
    printf("pen rating : %.1f\n", p3.rating);
}