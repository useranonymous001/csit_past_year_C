#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// int main()
// {
//     FILE *file1;
//     FILE *file2;

//     char c;
//     file1 = fopen("file01.txt", "r");
//     if (file1 == NULL)
//     {
//         printf("error opening file01...");
//         exit(0);
//     }
//     // file2 = fopen("newfile.txt", "w");
//     // while ((c = fgetc(file1)) != EOF)
//     // {
//     //     if ((c != 'a') && (c != 'e') && (c != 'o') && (c != 'i') && (c != 'u'))
//     //     {
//     //         fputc(c, file2);
//     //     }
//     // }
//     char string[200];
//     while (fscanf(file1, "%s", string) != EOF)
//     {
//         printf("%s ", string);
//     }

//     fclose(file1);
//     fclose(file2);
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// void main()
// {
//     FILE *sfp;
//     FILE *dfp;
//     char c;
//     sfp = fopen("file01.txt", "r");
//     if (sfp == NULL)
//     {
//         printf("error while creating a file");
//         exit(0);
//     }
//     dfp = fopen("xyz.txt", "w");
//     while ((c = fgetc(sfp)) != EOF)
//     {
//         if ((c != 'a') && (c != 'e') && (c != 'i') && (c != 'o') && (c != 'u'))
//             fputc(c, dfp);
//     }
//     fclose(sfp);
//     fclose(dfp);
//     getch();
// }

// write operation

// write a program to read 5 names from the user and save it inside the file named "names.txt" and also display/read after entering all the names into the file.

int main()
{
    char names[20];
    FILE *newfile;

    newfile = fopen("names.txt", "w");
    printf("Enter 3 names: ");
    for (int i = 0; i <= 3; i++)
    {
        scanf("%s", names);
        fprintf(newfile, "%s\n", names);
    }

    fclose(newfile);

    newfile = fopen("names.txt", "r");
    printf("Here are the list of names: \n");
    while (fscanf(newfile, "%s", names) != EOF)
    {
        printf("%s\n", names);
    }

    return 0;
}