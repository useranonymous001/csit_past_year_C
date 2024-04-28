/*
fibonacci series: 0 1 1 2 3 5 8 13 21 34 55 89
*/

// #include <stdio.h>
// #include <stdlib.h>

// int nth_fibonacci(int nth_term);
// int check_prime(int nth_fibo);

// int nth_fibonacci(int nth_term)
// {
//     int next_term;
//     int first = 0;
//     int second = 1;
//     int count = 2;

//     if (nth_term < 1)
//     {
//         printf("Enter number greater than 1 !!");
//         exit(1);
//     }
//     while (count != nth_term)
//     {
//         next_term = first + second;
//         first = second;
//         second = next_term;

//         count++;
//     }
//     return next_term;
// }

// int check_prime(int nth_fibo)
// {
//     int count = 0;
//     for (int i = 2; i < nth_fibo; i++)
//     {
//         if (nth_fibo % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     int nth_number;
//     int nth_fibo;
//     printf("Enter the nth term: ");
//     scanf("%d", &nth_number);

//     nth_fibo = nth_fibonacci(nth_number);
//     printf("The nth fibonacci number is %d\n\n", nth_fibo);

//     if (check_prime(nth_fibo))
//     {
//         printf("The nth_fibo %d is Prime", nth_fibo);
//     }
//     else
//     {
//         printf("Sorry it is not a prime number");
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int nth_fibonacci(int nth_term);
int check_prime(int nth_fibo);

int main()
{
    int nth_term;
    printf("Enter the nth term : ");
    scanf("%d", &nth_term);

    int nth_fibo = nth_fibonacci(nth_term);
    // printf("The nth term is %d", nth_fibo);

    if (check_prime(nth_fibo))
    {
        printf("\nThe nth fibo num %d is prime", nth_fibo);
    }
    else
    {
        printf("\nThe nth fibo num %d is not prime", nth_fibo);
    }
    return 0;
}

// function definition

int nth_fibonacci(int nth_term)
{
    if (nth_term < 1)
    {
        printf("enter the number greater than 1");
        exit(1);
    }

    int count = 2;
    int next_term, first = 0, second = 1;
    while (count != nth_term)
    {
        next_term = first + second;
        first = second;
        second = next_term;
        count++;
    }
    return next_term;
}

int check_prime(int nth_fibo_num)
{

    int isPrime = 1;
    for (int i = 2; i < nth_fibo_num; i++)
    {
        if (nth_fibo_num % i == 0)
        {
            isPrime = 0;
            return isPrime;
        }
    }
    return isPrime;
}