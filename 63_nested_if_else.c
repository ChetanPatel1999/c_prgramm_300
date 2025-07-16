//  Write a program to take 2 digit number  or 3 digit number or 4 digit number from
// user and print its reverse number and print sum of individual digit of that number
// and if number is not two digit or 3 digit or 4 digit so print "please enter 2 or 3 or 4
// digit number".
#include <stdio.h>
void main()
{
    int num, sum, r, s, t, u, rev;
    printf("enter 2 or 3 or 4 digit num : ");
    scanf("%d", &num);
    if (num > 9 && num < 10000)
    {
        if (num > 9 && num < 100)
        {
            r = num / 10;
            s = num % 10;
            rev = r + s * 10;
            sum = r + s;
            printf("sum of individul digit = %d\n", sum);
            printf("reverse num  = %d\n", rev);
        }
        else if (num > 99 && num < 1000)
        {
            r = num / 100;
            s = num % 100 / 10;
            t = num % 10;
            rev = r + s * 10 + t * 100;
            sum = r + s + t;
            printf("sum of individul digit = %d\n", sum);
            printf("reverse num  = %d\n", rev);
        }
        else
        {
            r = num / 1000;
            s = num % 1000 / 100;
            t = num % 100 / 10;
            u = num % 10;
            rev = r + s * 10 + t * 100 + u * 1000;
            sum = r + s + t + u;
            printf("sum of individul digit = %d\n", sum);
            printf("reverse num  = %d\n", rev);
        }
    }
    else
    {
        printf("num is not 2,3,4 digit");
    }
}
