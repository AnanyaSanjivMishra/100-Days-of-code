//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int number, originalNumber, digit;  
    long long product = 1;  
    int foundOddDigit = 0;   
    printf("Enter an integer: ");
    scanf("%d", &number);    
    originalNumber = number;     
    if (number < 0) {
        number = -number;
    }  
    while (number > 0) {      
        digit = number % 10;        
        if (digit % 2 != 0) {          
            product *= digit; 
            foundOddDigit = 1; 
        }      
        number /= 10; 
    }   
    if (foundOddDigit) {
        printf("The product of the odd digits in %d is %lld.\n", originalNumber, product);
    } else {   
        printf("There are no odd digits in %d.\n", originalNumber);
    }
    return 0;
}
