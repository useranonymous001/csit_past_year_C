/*
program to swap the values of two variabbles without using third var.
*/

#include <stdio.h>
int main()
{
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a = %d and b = %d", a, b);
    return 0;
}