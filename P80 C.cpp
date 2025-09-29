//Q80: Multiply two matrices.
#include <stdio.h>
#define MAX 10

void multiply(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int rowFirst, int colFirst, int colSecond) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colFirst; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

int main() {
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int rowFirst, colFirst, rowSecond, colSecond;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colFirst; j++) {
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);
    if (colFirst != rowSecond) {
        printf("Incompatible matrix dimensions\n");
        return 1;
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < colSecond; j++) {
            scanf("%d", &second[i][j]);
        }
    }
    multiply(first, second, result, rowFirst, colFirst, colSecond);
    printf("Resultant matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

