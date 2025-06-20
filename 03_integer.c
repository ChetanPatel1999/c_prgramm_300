//%d is  formate specifire for integer data
//%f is  formate specifire for float data
//%c is  formate specifire for character data
#include<stdio.h>
void main()
{
   printf("value = %d\n",12);
   printf("value = %d\n",5+8);	
   printf("float value = %f\n",5.78); // 5.780000
   printf("float value = %.2f\n",5.78);
   printf("float value = %.1f\n",5.3+4.2);
   printf("charcter value = %c\n",'@');
   printf("character value = %c",'L');
}
