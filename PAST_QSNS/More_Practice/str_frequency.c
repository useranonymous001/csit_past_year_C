
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{

    char str[MAX_SIZE];
    int freq[26] = {0};

    printf("Enter a string/line: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            printf("'%c' : '%d'\n", i + 'a', freq[i]);
        }
    }

    return 0;
}