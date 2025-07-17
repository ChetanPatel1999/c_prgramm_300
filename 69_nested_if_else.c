// club project
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 12
    if (age >= 18)
    {
        printf("<---welcome to my club--->\n");
        printf("club menu....\n");
        printf("1. sandwitch  : 120\n");
        printf("2. noodles    : 80\n");
        printf("3. burger     : 50\n");
        printf("choose order : ");
        scanf("%d", &order);
        switch (order)
        {
        case 1:
            printf("sandwitch types...\n");
            printf("1. paneer sandwitch     : 120\n");
            printf("2. chiz sandwitch     : 80\n");
            printf("3. masala sandwitch     : 50\n");
            printf("choose order : ");
            scanf("%d", &order);
            switch (order)
            {
            case 1:
                printf("your paneer sandwitch is orderd please pay 120 rs\n");
                break;
            case 2:
                printf("your chiz sandwitch is orderd please pay 80 rs\n");
                break;
            case 3:
                printf("your masala sandwitch is orderd please pay 50 rs\n");
                break;
            default:
                printf("please select 1 to 3 number\n");
            }

            break;
        case 2:
            printf("your noodles is orderd please pay 80 rs\n");
            break;
        case 3:
            printf("your burger is orderd please pay 50 rs\n");
            break;
        default:
            printf("please select 1 to 3 number\n");
        }
    }
    else
    {
        printf("you are not adult please try after %d year\n", 18 - age);
    }

    printf("thanks for visiting my club %c", 1);
}