//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;
    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (R in %%): ");
    scanf("%f", &rate);
    printf("Enter the time period in years (T): ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100.0;
    amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = amount - principal;   
    printf("\n----------------------------------------\n");
    printf("Calculating Interest for:\n");
    printf("Principal: %.2f\n", principal);
    printf("Rate: %.2f%%\n", rate);
    printf("Time: %.2f years\n", time);
    printf("----------------------------------------\n");
    printf("Simple Interest is: %.2f\n", simple_interest);
    printf("Compound Interest is: %.2f\n", compound_interest);
    printf("Total Amount with Compound Interest is: %.2f\n", amount);
    printf("----------------------------------------\n");
    return 0;
}
