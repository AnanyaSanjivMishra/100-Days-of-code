//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
#define MAX 10
int main()
{
    int matrix[MAX][MAX], row, col, sum[MAX] = {0}, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (i = 0; i < row; i++)
    {
        printf("Sum of row %d: %d\n", i + 1, sum[i]);
    }

    return 0;
}

