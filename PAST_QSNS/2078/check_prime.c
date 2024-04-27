// program to check the prime number

#include <stdio.h>
#include <stdlib.h>

int check_prime(int *number);
int main()
{

    int num;
    printf("enter num: ");
    scanf("%d", &num);

    if (check_prime(&num))
    {
        printf("The number is prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;
}

int check_prime(int *number)
{
    int count = 0;
    if (*(number) < 2)
    {
        printf("Enter value greater than 1");
        exit(0);
    }
    for (int i = 2; i < *(number); i++)
    {
        if (*(number) % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}