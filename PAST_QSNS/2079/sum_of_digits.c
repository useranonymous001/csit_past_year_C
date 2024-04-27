/*
Sum of digits using recursion
*/

int sum(int num);
#include <stdio.h>
int main()
{

    // int num = 123;
    // int sum = 0;
    // while (num != 0)
    // {
    //     int remainder = num % 10;
    //     sum += remainder;
    //     num /= 10;
    // }
    // printf("The sum of the number is %d", sum);
    int result = sum(888);
    printf("The result is %d", result);

    return 0;
}

int sum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int remainder = num % 10;
    return (remainder + sum(num / 10));
}