/*
MALLOC  stands for memory allocation. It is used for allocating memory dynamically i.e., allocating free memory at the runtime.

It creates an heap of memory as an array

It takes no. of bytes to be allocated  as an input and returns pointer of the type void
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    printf("The size of int in my laptop is %d\n", sizeof(int));
    printf("The size of char in my laptop is %d\n", sizeof(char));
    printf("The size of float in my laptop is %d\n", sizeof(float));
    printf("The size of double in my laptop is %d\n", sizeof(double));
    */

    int *demo, *ptr;

    //  ptr = malloc (space_req * sizeof(data_type) )
    demo = (int *)malloc(10 * sizeof(int));

    // but, we know that, malloc returns the void type pointer and we have declared a int  type pointer. So, we need to type cast the malloc to the int type
    int n;
    printf("enter the number of spaces for int : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    // this creates a space for 5 integer type elements that can be allocated at the runtime

    // let's look at an example:

    for (int i = 0; i < n; i++)
    {
        printf("Enter the elem at %d: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elem at %d is %d \n", i, ptr[i]);
    }

    return 0;
}
