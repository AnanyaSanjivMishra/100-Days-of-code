//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>
void findMissingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2; 
    int sum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    
    int missingNumber = total - sum;
    printf("%d\n", missingNumber);
}
int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    
    int arr[n - 1];
    printf("Enter %d elements (integers between 0 to %d except one):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    
    findMissingNumber(arr, n);
    
    return 0;
}
