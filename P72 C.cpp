//Q72: Find the sum of all elements in a matrix.
#include <stdio.h>
#define MAX 100
int main()
{
    int matrix[MAX][MAX], a, b, i, j, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &a, &b);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("Sum of all elements in the matrix: %d\n", sum);
    return 0;
}
