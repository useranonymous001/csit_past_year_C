#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{

    char str[MAX_SIZE];
    int freq[256] = {0};

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            freq[(int)str[i]]++;
        }
    }

    for (int i = 0; i < 256; i++)
    {

        if (freq[i] != 0)
        {
            printf("'%c' : '%d' \n", (char)i, freq[i]);
        }
    }

    return 0;
}