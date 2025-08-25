// wehn we increase pointer value by one so its increase by 4.
// if pointer type is integer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;
    printf("address of a = %d\n", &a);   // 12453
    printf("value of ptr = %d\n", ptr);  // 12453
    ptr++;                               // its increase by 4 because its type is integer
    printf("address of a = %d\n", &a);   // 12453
    printf("value of ptr  = %d\n", ptr); // 12457
}