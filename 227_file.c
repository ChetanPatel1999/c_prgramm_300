// write something inside file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("C:\\Users\\WIN\\Desktop\\ranveer\\home.txt", "w");
    fprintf(ptr, "hello i am ranveer");
    fclose(ptr); // close the file
}