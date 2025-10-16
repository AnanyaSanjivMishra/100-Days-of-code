#include <stdio.h>
void findPrevGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int prevGreater = -1; 
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j]; 
                break; 
            }
        }
        printf("%d", prevGreater);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n"); 
}
int main() {
    int arr[] = {10, 5, 11, 6, 20, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Previous Greater Elements: ");
    findPrevGreater(arr, n);
    return 0;
}
