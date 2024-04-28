

#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE *number;
    number = fopen("num.txt", "r");
    FILE *prime;
    prime = fopen("prime.txt", "w");
    int num;
    while (fscanf(number, "%d", &num) != EOF)
    {
        int count = 0;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
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
