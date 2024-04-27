
/*
    Pointers are special type of variables that stores or points the address of other variables.

    It points the base address of the varible i.e., the first memory address of that variable.

    %u operators are used to print the address of the pointer itself.

    *(&i) ==> value at address operand


    meaning of:
        int *i
            --> this means  the pointer i only stores the address of those variables whose datatype is of integers
        If we want to store the address of the variables whose datatype are strings, or float, or double then we can also use:
            char *ch_ptr;
            float *flt_ptr;
            double *db_ptr;
*/

#include <stdio.h>

/*
 void change_value(int *value)
 {
     *value = 100001;
 }

*/
// another function starts here............
/*
int sum_value(int *num1, int *num2)
{
    return *num1 * *num2;
}
*/

// int main()
// {
// int value;
// value = 12;
// printf("before change: \n");
// printf("value = %d", value);

// change_value(&value);

// printf("\nAfter change: ");
// printf("\nvalue: %d", value);

// int value1 = 12;
// int value2 = 12;
// int sum = sum_value(&value1, &value2);
// printf("the sum is %d", sum);
// return 0;

// NOTE:
//          & ==> adddress of

/*

int *address_storage;
int i = 123;
address_storage = &i;

// value of i
printf("%d\n", i);

// address of i
printf("%d\n", &i);

// address of i using pointer
printf("%u\n", address_storage);

// pointer's address itself
printf("%u\n", &address_storage);

// use of value at address operator *(&var_name)
printf("\nThe value at %u is %d", address_storage, *(address_storage));

// Printing the address of pointer varibale itself
printf("\nThe address of pointer 'address_storage' is %u", &address_storage);

*/

//     return 0;
// }

int main()
{
    int i = 12, *j, **k;
    j = &i;
    k = &j;
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j); // *(&i)
    printf("the value of i is %d\n", *(&i));
    printf("the address of i is %u\n", j);
    printf("the address of j is %u\n", &j);
    printf("the value of j is %u\n", *(&j));
    printf("The value of k is %u\n", *(&k));
    return 0;
}

//     value     address
//  i = 123        1111
//  *j= 1111       pppp
