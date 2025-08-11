#include <stdio.h>
int factorial(int num) // 4
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 4
    {
        printf("factorial %d = %d \n", i, factorial(i));
    }
}
int greatest(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void main()
{
    // printf("factorial of 5 = %d\n", factorial(5));
    // printf("factorial of 4= %d\n", factorial(4));
    // range(1, 5);
    printf("greatest num : %d", greatest(677, 90));
}