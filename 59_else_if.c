// 16. Write a program to calculate the total salary based on the basic salary:
// If  BS in between 4000-6000     ta 40% & hra is 20%
// If  BS in between 6000-10000    ta 45% & hra is 20%
// If  BS is greater than 10000    ta 55% & hra is 5000
#include <stdio.h>
void main()
{
    float basic_sallary, total_sallary;
    printf("enter basic sallary : ");
    scanf("%f", &basic_sallary);
    if (basic_sallary >= 4000 && basic_sallary < 6000)
    {
        total_sallary = basic_sallary + (basic_sallary * 40) / 100 + (basic_sallary * 20) / 100;
    }
    else if (basic_sallary >= 6000 && basic_sallary <= 10000)
    {
        total_sallary = basic_sallary + (basic_sallary * 45) / 100 + (basic_sallary * 20) / 100;
    }
    else if (basic_sallary > 10000)
    {
        total_sallary = basic_sallary + (basic_sallary * 55) / 100 + 5000;
    }
    else
    {
        printf("invalid sallary ");
    }

    printf("total sallary : %.2f", total_sallary);
}