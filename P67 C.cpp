//Q67: Insert an element in an array at a given position.

#include <stdio.h>
void insert(int arr[], int n, int key, int position) {
    if (position < 0 || position > n) {
        printf("Invalid position\n");
        return;
    }
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = key;
}
int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 99;
    int position = 2; 
    printf("Before insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insert(arr, n, key, position);
    n++; 
    printf("After insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
