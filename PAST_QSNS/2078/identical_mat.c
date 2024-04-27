/*
program to check whether two matrices are identical or not.
*/

#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COL 2

int main()
{
    int matrix_1[ROW][COL], matrix_2[ROW][COL];
    printf("Enter value for matrix 1: ");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("\nEnter %d%d : ", i, j);
            scanf("%d", &matrix_1[i][j]);
        }
    }
    printf("Enter value for matrix 2: ");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("\nEnter %d%d : ", i, j);
            scanf("%d", &matrix_2[i][j]);
        }
    }

    printf("\nComparing.........\n");

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (matrix_1[i][j] != matrix_2[i][j])
            {
                printf("The matrix is not identical !! ");
                exit(0);
            }
        }
    }
    printf("The matrix is identical indeeed !! ");

    return 0;
}