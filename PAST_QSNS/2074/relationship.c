/*
Relationship between pointer and one-dimensional array:


    1) array name as a pointer:
        when you declare an array, the array name itself behave like a pointer pointing the first element of an array.
        // Eg:
        int arr[5];
*/

/*
    2) Pointer Arthematic:
        Since arrays decay into pointers to their first elements in most contexts, you can use pointer arithmetic to traverse the elements of the array.
*/
// Eg:
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    printf("%d\n\n", &arr);

    int *ptr = arr;

    for (int i = 0; i < 5; i++)

    {
        printf("%d\n", *(ptr + i)); // similar ==> arr[i];
    }

    return 0;
}

/*

3)  passing an array to the function:
        when you are passing an array to the function , you are actually passing an pointer to the first element of an array.
*/
// Eg:

#include <stdio.h>
void relation_ship(int *passed_array)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", passed_array[i]);
    }
}
int main()
{

    int array[5] = {1, 2, 4, 3, 5};
    relation_ship(array);
    return 0;
}

/*

4) Dynamic Memory Allocation
        Memory to arrays can be allocated dynamically using pointers.
        this helps to create a memory thoroughout the program rather than just during function call
*/

// Eg:

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) // inserting values to an dynamic array
    {
        ptr[i] = i * i;
    }

    for (int i = 0; i < 5; i++) // printing the value of an array
    {
        printf("%d ==> %u\n", ptr[i], (&ptr[i]));
    }

    return 0;
}