//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    char op;
    int num1, num2;    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &op);   
    printf("Enter number 1: ");
    scanf("%d" , &num1 );
    printf("Enter number 2: ");
    scanf("%d" , &num2 );
    switch (op) {
        case '+':
            printf("Sum is = %d\n", num1 + num2);
            break;
        case '-':
            printf("Difference = %d\n", num1 - num2);
            break;
        case '*':
            printf("Product is = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Quotient is = %d\n", num1 / num2);
            } else {
                printf("Error! Cannot divide by zero.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Remainder is = %d\n", num1 % num2);
            } else {
                printf("Error! Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Error! You have entered an invalid operator.\n");
    }
    return 0; 
}
