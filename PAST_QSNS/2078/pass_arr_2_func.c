/*
Let's practice how to pass an array to the function.
Inorder to pass an array to the function:

inside function call:
    function_name(arr_name);

inside function definition:
    function_name(int arr_name[]);

    ==> don't forget to use [] after name

*/

#include <stdio.h>
int arr_to_func(int arr[]);

int main()
{

    int arr[5] = {1, 2, 4, 5, 6};
    arr_to_func(arr);

    char string[5];
    printf("Enter a string: ");
    scanf("%5s", string);

    printf("The string is %s", string);

    return 0;
}

// function definition
int arr_to_func(int arr[])
{

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
