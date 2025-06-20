//wap to take two float value from user and display sum.
#include<stdio.h>
void main()
{
	float num1,num2,result;
	printf("this is addition program ....\n");
	printf("------------------------------\n");
	printf("enter first value = ");
	scanf("%f",&num1);
	printf("enter seocnd value = ");
	scanf("%f",&num2);
	result=num1+num2;
	printf("------------------------------\n");
	printf("sum of %.1f and %.1f = %.1f",num1,num2,result);
}
