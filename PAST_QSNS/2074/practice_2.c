#include <stdio.h>
#include <stdlib.h>

// int pass_array(int *arr)  ==> passing using pointer

void increment()
{
    static int count = 0;
    count++;
    printf("%d \n", count);
}
int main()
{
    increment();
    increment();
    increment();
    increment();
    increment();
    return 0;
}