/*
MALLOC  stands for memory allocation. It is used for allocating memory dynamically i.e., allocating free memory at the runtime.

It creates an heap of memory as an array

It takes no. of bytes to be allocated  as an input and returns pointer of the type void
*/

/*
DMA ==> dynamic memory allocation
        lets learn how to do this
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i * i;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("size of ptr = %d", sizeof(ptr));

    return 0;
}