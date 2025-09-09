// typedef :-its used to change predefined data
// type name temparary inside program.
#include <stdio.h>
typedef long long int k;
typedef long double K;
typedef short int si;
struct student_of_10th_class_section_A
{
    int age;
    int rno;
};
typedef struct student_of_10th_class_section_A st10a;
void main()
{
    st10a s1;
    k a;
    K d;
    si s;
    printf("size of long long int = %d\n", sizeof(a));
    printf("size of long double = %d\n", sizeof(d));
    printf("size of short int = %d\n", sizeof(s));
    printf("size of st10a = %d\n", sizeof(s1));
}