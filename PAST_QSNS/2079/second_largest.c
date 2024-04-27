/*
program to find the second largest in the array;

*/

#include <stdio.h>
int main()
{
    int n;
    printf("ENter n: ");
    scanf("%d", &n);
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter n %d", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Original array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] < numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("\nAfter arranging in descending order: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n\n the second largest number is %d", numbers[1]);
    return 0;
}