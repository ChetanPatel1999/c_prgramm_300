#include <stdio.h>
void main()
{
    int total_ammount = 20000, d_amount = 0;
    printf("<-----sallary distribute app ----->\n");
    printf("<-----total amount = %d ----->\n", total_ammount);
    int sal, n;
    do
    {
        printf("enter emp sal :");
        scanf("%d", &sal);
        d_amount = d_amount + sal;
        if (d_amount > total_ammount)
        {
            printf("\nsallary is not distribute succecfully\n\n");
            d_amount = d_amount - sal;
            printf("insufficiant belance : %d\n", total_ammount - d_amount);
        }
        else
        {
            printf("\nsallary is  distribute succecfully\n\n");
        }
        printf("enter 1 for more emp : ");
        scanf("%d", &n);
    } while (n == 1);
    printf("----------------------------------------------\n");
    printf("\ndistributed amount : %d\n", d_amount);
    printf("remaning  amount : %d\n", total_ammount - d_amount);
}