/*
program to find the transpose of the matrix
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, col;
    printf("enter the row and col:  ");
    scanf("%d%d", &row, &col);

    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter mat %d%d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nBefore transpose\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}