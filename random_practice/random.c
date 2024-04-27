// // #include <stdio.h>
// // #include <strings.h>
// // #include <conio.h>

// // int main()
// // {

// //     char text[200];
// //     int spaces = 0, vowel = 0;
// //     int consonant;
// //     int words = 0;
// //     int special_char = 0;

// //     printf("Enter text: ");
// //     gets(text);

// //     int tex_length = strlen(text);

// //     int i = 0;
// //     while (text[i] != '\0')
// //     {
// //         if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
// //         {
// //             vowel++;
// //         }
// //         else if (text[i] <= 'a' || text[i] >= 'z')
// //         {
// //             special_char++;
// //         }
// //         if (text[i] == ' ')
// //         {
// //             spaces++;
// //             words++;
// //         }

// //         i++;
// //     }

// //     consonant = text_length - (vowel + spaces + special_char);
// //     special_char -= spaces;
// //     printf("Text Length = %d\nWords = %d\nVowels = %d\nConsonants = %d\nSpaces = %d\nSpecial Char = %d\n ", text_length, words + 1, vowel, consonant, spaces, special_char);

// //     return 0;
// // }

// #include <stdio.h>
// #include <strings.h>
// #include <stdlib.h>

// int main()
// {

//     char text[200];
//     int vowel = 0, spaces = 0, consonants = 0, special_char = 0, words = 0;

//     printf("Enter a text: ");
//     gets(text);

//     int text_length = strlen(text);
//     int i = 0;
//     while (text[i] != '\0')
//     {

//         if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
//         {
//             vowel++;
//         }

//         else if (text[i] == ' ')
//         {
//             spaces++;
//             words++;
//         }

//         else if (text[i] < 'a' || text[i] > 'z')
//         {
//             special_char++;
//         }

//         i++;
//     }

//     consonants = text_length - (vowel + spaces + special_char);

//     printf("Text Length = %d\nWords = %d\nVowels = %d\nConsonants = %d\nSpaces = %d\nSpecial Char = %d\n ", text_length, words + 1, vowel, consonants, spaces, special_char);

//     return 0;
// }

#include <stdio.h>
int main()
{

    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
}