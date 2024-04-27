
/*
Inorder to pass function to an array using a pointer, we need to pass the pointer of the first element of an array.
*/

// #include <stdio.h>
// #include <stdlib.h>

// void printArray(int *arr, int size);

// int main()
// {

//     int myArray[] = {1,
//                      2,
//                      4,
//                      5,
//                      6,
//                      7,
//                      8,
//                      9,
//                      45,
//                      34,
//                      3};
//     int size = sizeof(myArray) / sizeof(myArray[0]);
//     printArray(myArray, size);

//     return 0;
// }

// void printArray(int *arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr);

int main()
{

    int myArray = 23;
    printf("%d\n", &myArray);
    // int size = sizeof(myArray) / sizeof(myArray[0]);
    printArray(&myArray);

    return 0;
}

void printArray(int *arr)
{

    printf("%d ", *(arr));
    printf("%d ", *(&arr));
}