// Write a program to make simple calculator.
//       Press 1 to addition
//       Press 2 to subtraction
//       Press 3 to multiplication
//       Press 4 to division
#include <stdio.h>
void main()
{
    int num, a, b, c;
    printf("<------welcome to my calculator----->\n");
    printf("  Press 1 to addition : \n");
    printf("  Press 2 to subtraction : \n");
    printf("  Press 3 to multiplication : \n");
    printf("  Press 4 to division : \n");
    printf("  Press num : ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("you select addition ..\n");
        printf("enter first num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a + b;
        printf("addition : %d\n", c);
        break;
    case 2:
        printf("you select subtraction ..\n");
        printf("enter first num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a - b;
        printf("subtraction : %d\n", c);
        break;
    case 3:
        printf("you select multiplication ..\n");
        printf("enter first num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a * b;
        printf("multiplication : %d\n", c);
        break;
    case 4:
        printf("you select division ..\n");
        printf("enter first num : ");
        scanf("%d", &a);
        printf("enter second num : ");
        scanf("%d", &b);
        c = a / b;
        printf("division : %d\n", c);
        break;
    default:
        printf("please enter 1 to 4");
    }
}