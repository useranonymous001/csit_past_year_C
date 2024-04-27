
// /*
// write a program to calculate a power b without using pow function
// */

// #include <stdio.h>

// int main()
// {
//     int cofficient, power;
//     int result = 1;
//     printf("Enter what power what? : ");
//     scanf("%d%d", &cofficient, &power);

//     for (int i = 0; i < power; i++)
//     {
//         result *= cofficient;
//     }
//     printf("a power %d is %d", power, result);

//     return 0;
// }

// program to make a menu driven program and operate it until the user choose D

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    while (1)
    {

        printf("\nMENU DRIVEN PROGRAM \n");
        printf("A. Find Even  or Odd \n");
        printf("B. Find positive or negative\n");
        printf("C. Find the factorial \n");
        printf("D. Exit\n");

        char choice;
        printf("Enter your choice : ");
        scanf(" %c", &choice);

        switch (choice)
        {

        case 'A':
        {
            int a;
            printf("enter a numbers: ");
            scanf("%d", &a);
            if (a % 2 == 0)
            {
                printf("%d is even\n\n", a);
            }
            else
            {
                printf("%d is odd\n\n", a);
            }
        }
        break;
        case 'B':
            int c;
            printf("Enter a number: ");
            scanf("%d", &c);
            if (c > 0)
            {
                printf("%d is positive\n\n", c);
            }
            else
            {
                printf("%d is negative\n\n", c);
            }
            break;
        case 'C':
            int n, fact = 1;
            printf("enter a number: ");
            scanf("%d", &n);
            for (int i = 1; i <= n; i++)
            {
                fact *= i;
            }
            printf(" The factorial of %d is %d\n\n", n, fact);
            break;

        case 'D':
            printf("Thank you !!\nPlease Visit again !!");
            exit(0);
        default:
            printf("Invalid option choose again !!\n\n");
            break;
        }
    }
    return 0;
}