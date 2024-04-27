/*
program to read the file named num.txt and filter all those prime numbers and store it into a prime.txt

*/

#include <stdio.h>
int main()
{

    FILE *number;
    number = fopen("num.txt", "r");
    int num;
    FILE *prime;
    prime = fopen("prime.txt", "w");
    while (fscanf(number, "%d", &num) != EOF)
    {
        int count = 0;
        for (int i = 2; i < num / 2; i++)
        {
            if (num % 2 == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            fprintf(prime, "%d\n", num);
        }
    }
    return 0;
}