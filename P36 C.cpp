//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2;    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);    
    int og_num1 = num1;
    int og_num2 = num2;   
    while (num2 != 0) {
        int temp = num2;      
        num2 = num1 % num2;   
        num1 = temp;          
    }   
    printf("The HCF (GCD) of %d and %d is: %d\n", og_num1, og_num2, num1);
    return 0;
}
