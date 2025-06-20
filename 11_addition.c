//wap to take two integer value from user and display sum.
#include<stdio.h>
void main()
{
	int num1,num2,result;
	printf("this is addition program ....\n");
	printf("------------------------------\n");
	printf("enter first value = ");
	scanf("%d",&num1);
	printf("enter seocnd value = ");
	scanf("%d",&num2);
	result=num1+num2;
	printf("------------------------------\n");
	printf("sum of %d and %d = %d",num1,num2,result);
}
