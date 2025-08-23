//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() 
{  
    int num1, num2, temp; 
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);    
    printf("\nBefore swapping: First = %d, Second = %d\n", num1, num2);    
    temp = num1;    
    num1 = num2;    
    num2 = temp;        
    printf("After swapping:  First = %d, Second = %d\n", num1, num2);
    return 0;
}
