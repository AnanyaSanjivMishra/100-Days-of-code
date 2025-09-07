//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {
    int n;
    long long int factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
        for (int i = 1; i <= n; ++i) {
            factorial *= i; 
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    return 0;
}
