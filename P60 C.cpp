//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positive_count++;
        } else if(arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    printf("The number of positive elements in the array is: %d\n", positive_count);
    printf("The number of negative elements in the array is: %d\n", negative_count);
    printf("The number of zero elements in the array is: %d\n", zero_count);
    return 0;
}
