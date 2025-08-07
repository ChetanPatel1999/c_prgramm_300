#include <stdio.h>
void fun3()
{
    printf("hello i am fun3\n");
}
void fun1()
{
    fun3();
    printf("hello i am fun1\n");
}
void fun2()
{
    printf("hello i am fun2\n");
    fun1();
}
void main()
{
    fun1();
    printf("main fun is start...\n");
    fun2();
    printf("main fun is end");
}