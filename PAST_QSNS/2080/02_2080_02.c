

// #include <stdio.h>
// #include <conio.h>

// int factorial(int number);
// int factorial(int number)
// {

//     if (number == 1)
//     {
//         return 1;
//     }
//     else
//         return (number * factorial(number - 1));
// }
// int main()
// {

//     int num;
//     int fact;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     fact = factorial(num);
//     printf("\nthe factorial of %d is %d", num, fact);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     char word[20];
//     char reversed_word[20];
//     char original_word[20];
//     printf("Enter a word: ");
//     gets(word);

//     strcpy(original_word, word);
//     strcpy(reversed_word, word);
//     strrev(reversed_word);

//     if (strcmp(original_word, reversed_word) == 0)
//     {
//         printf("The word is palindrome");
//     }
//     else
//     {
//         printf("SOrry mann ");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int rows, cols, i, j;
//     printf("Enter the no of rows & cols of the matrix : ");
//     scanf("%d%d", &rows, &cols);
//     int matrix[rows][cols];

//     // taking input from the user:

//     for (i = 0; i < rows; i++)
//     {

//         for (j = 0; j < cols; j++)
//         {
//             printf("\nEnter %d%d elems: ", i + 1, j + 1);
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // finding the largest element from the row.
//     for (i = 0; i < rows; i++)
//     {
//         int greatest = matrix[i][0];
//         for (j = 0; j < cols; j++)
//         {
//             if (matrix[i][j] > greatest)
//             {
//                 greatest = matrix[i][j];
//             }
//         }
//         printf("\nThe greatest in row %d is %d", i + 1, greatest);
//     }
//     return 0;
// }

#include <stdio.h>

int sum(int TEN);
int sum(int TEN)
{
    int sum = 0;
    int count = 0;
    // int i = 0;
    // while (count != TEN)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum += i;
    //         count++;
    //     }

    //     i++;
    // }
    int number = 2;
    while (count < 10)
    {
        sum += number; // Add the current even number to the sum
        number += 2;   // Move to the next even number
        count++;       // Increment the counter
    }
    return sum;
}
int main()
{
    int sum_even = sum(10);
    printf("The sum is %d", sum_even);
    return 0;
}