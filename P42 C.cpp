//Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num;
    int divisors = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a perfect number.\n", num);
        return 0; 
    }
    for (int i = 1; i <= num / 2; i++) {     
        if (num % i == 0) {
            divisors += i; 
        }
    }    
    if (divisors == num) {
        printf(" %d is a perfect number.\n", num);
    } else {
        printf(" %d is not a perfect number.\n", num);
    }
    return 0;
}
