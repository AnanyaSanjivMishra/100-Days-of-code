//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main() {
    int n;
    int sum = 0; 
    printf("Enter the number of odd numbers to sum (n): ");
    scanf("%d", &n);
    printf("The first %d odd numbers are: ", n);
    for (int i = 1; i <= n; i++) {
        int odd_number = 2 * i - 1;
        printf("%d ", odd_number);
        sum = sum + odd_number; 
    }
    printf("\nThe sum is: %d\n", sum);
    return 0; 
}
