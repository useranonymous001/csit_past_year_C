/*
program to find the sum and average of the first n natural number.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter nth number: ", &n);
    scanf("%d", &n);

    int org = n;
    int sum = 0;

    int count = 1;

    // while (n != 0)
    // {
    //     sum += count;
    //     count++;
    //     n--;
    // }
    // printf("the sum of first n natural number is %d", sum);
    // int avg = sum / org;
    // printf("\nThe avearage is %d", avg);

    do
    {
        sum += count;
        count++;
        n--;
    } while (n != 0);
    printf("the sum of first n natural number is %d", sum);
    int avg = sum / org;
    printf("\nThe avearage is %d", avg);
    return 0;
}