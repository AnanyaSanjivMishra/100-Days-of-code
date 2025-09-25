//Q68: Delete an element from an array.
#include <stdio.h>
#define MAX 100
void Element(int arr[], int *n, int index) {
    if (index < 0 || index >= *n) {
        printf("Invalid index\n");
        return;
    }
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}
void Array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[MAX], n, index;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter index of element to delete (0 to %d): ", n - 1);
    scanf("%d", &index);
    Element(arr, &n, index);
    printf("Array after deletion:\n");
    Array(arr, n);
    return 0;
}
