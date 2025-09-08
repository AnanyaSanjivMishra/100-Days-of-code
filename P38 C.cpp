
//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {   
    int number, sum = 0, remainder;   
    printf("Enter an integer: ");    
    scanf("%d", &number);  
    int OgNumber = number;
    while (number > 0) {
        remainder = number % 10;    
        sum = sum + remainder;
        number = number / 10;
    }
    printf("The sum of the digits of %d is %d.\n", OgNumber, sum);
    return 0;
}
