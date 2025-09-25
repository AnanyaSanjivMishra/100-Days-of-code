//Q69: Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>
#define MAX 100
void SecondLargest(int arr[], int n) {
    int first, second;
    first = second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is %d\n", second);
    }
}
int main() {
    int arr[MAX], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    SecondLargest(arr, n);

    return 0;
}
