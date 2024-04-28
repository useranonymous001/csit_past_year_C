#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Enter n greater than 1");
        exit(1);
    }
    int num = 2;

    while (n != 0)
    {
        int isPrime = 1;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime)
        {
            printf("%d\n", num);
            n--;
        }

        num++;
    }

    return 0;
}