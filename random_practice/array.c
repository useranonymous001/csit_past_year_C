/*
ARRAY
    Array are collection of variables of the same data type.
    It is a collection of elements having same data type.
    It stores the data in a contigious memory location.

    PROPERTIES
        fixed size
        contigious memory location: easy access
        homogenous data
        static memory location
        can be easily accessed using indexing


    TYPES OF ARRAY
        1) Single Dimensional Array
        2) Multi Dimensional Array


    size of array means the memory occupied by each elements.
    length of an array means the no. of elements in that array.


    int elements inide an array occupies 4 byte of memory i.e., 5 element = 5 * 4 = 20 byte
*/

#include <stdio.h>
#include <strings.h>
int main()
{

    // int arr[] = {12,
    //              32,
    //              124,
    //              14,
    //              54};
    // int arr2[5] = {12,
    //                13,
    //                14,
    //                15,
    //                16};

    // // int size = sizeof(arr);
    // int length = sizeof(arr) / 4;
    // printf("%d ", size);
    // printf(" %d ", length);

    // arr[3] = 23;
    // // printf("%d ", arr[3]);

    // for (int i = 0; i < length; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // int array[row][cols];

    int matrix[3][3]; // size = 3 * 4 ==> 12 it can hold upto 12 elements

    // matrix[0][0] = 12;
    // matrix[0][1] = 13;
    // matrix[0][2] = 14;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = i * j;
        }
    }

    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // char fruit[5] = {'a', 'p', 'p', 'l', 'e'};
    // // printf("Enter namne: ");

    // // for (int i = 0; fruit[i] != '\0'; i++)
    // // {
    // //     printf("%c ", fruit[i]);
    // // }
    // // printf("%d", sizeof(fruit));
    // // printf("\n");
    // // printf("After emptying an array: ");
    // // fruit[0] = '\0';
    // // for (int i = 0; fruit[i] != '\0'; i++)
    // // {
    // //     printf("%c ", fruit[i]);
    // // }
    // // printf("%d ", sizeof(fruit) / 4);

    // int numbers[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     numbers[i] = i + 1;
    // }

    // //////////////////////////////////////////////////////////////////////////
    // char arr[5] = {'a', 'b', 'c', 'd', 'e'};

    // printf("Before: ");

    // for (int i = 0; arr[i] != '\0'; i++)
    //     printf("%c ", arr[i]);

    // printf("\n");

    // // Copying elements of empty array in arr
    // strcpy(arr, "");

    // printf("After: ");

    // for (int i = 0; arr[i] != '\0'; i++)
    //     printf("%c ", arr[i]);

    // printf("%d ", sizeof(arr));
    return 0;
}