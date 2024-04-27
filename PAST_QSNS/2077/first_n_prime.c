/*
programto find the first n prime numbers
*/

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int range;
//     printf("enter range: ");
//     scanf("%d", &range);

//     for (int i = 2; i < range; i++)
//     {
//         int count = 0;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 count += 1;
//                 break;
//             }
//         }
//         if (count == 0)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int range;
    printf("Enter range: ");
    scanf("%d", &range);

    int num = 2;

    while (range != 0)
    {

        int isPrime = 1;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", num);
            range--;
        }
        num++;
    }

    return 0;
}