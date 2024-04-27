/*
we use dynamic memory allocation when the amount of memory needed isn't known at compile time or when you want the memory to remain in use for the duration of the program rather than just the duration of the function call.


find the sum of the square of the first n natural numbers using dynamic memory allocation (also can use function )


*/

// #include <stdio.h>
// #include <stdlib.h>

// int *createArray(int size)
// {
//     int *arr = (int *)malloc(size * sizeof(int));
//     if (arr != NULL)
//     {
//         for (int i = 0; i < size; i++)
//         {
//             arr[i] = i * i;
//         }
//     }
//     return arr;
// }
// int main()
// {
//     int *myArray = createArray(10);
//     if (myArray != NULL)
//     {
//         for (int i = 0; i < 10; i++)
//         {
//             printf("%d ", myArray[i]);
//         }
//         printf("\n");
//     }
//     free(myArray);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int *create_array(int size);

int main()
{
    int *my_array = create_array(10);
    if (my_array != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", my_array[i]);
        }
        printf("\n");
    }
    free(my_array);

    return 0;
}

// function definition
int *create_array(int size)
{
    int *arr = (int *)malloc(size * sizeof(int)); // 40 byte
    if (arr != NULL)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = i * i; // sum of sq of the first 10 natural no.
        }
    }
    return arr;
}
