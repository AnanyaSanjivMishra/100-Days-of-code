//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 10

bool Diagonal(int matrix[MAX][MAX], int n) {
    bool seen[MAX * MAX] = {false};  
    for (int i = 0; i < n; i++) {
        int elem = matrix[i][i];
        if (seen[elem]) {
            return false;  
        }
        seen[elem] = true;
    }
    return true;
}

int main() {
    int matrix[MAX][MAX];
    int n;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (Diagonal(matrix, n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
