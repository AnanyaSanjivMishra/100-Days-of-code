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
    printf("Calculating Interest for:\n");
    printf("Principal: %f\n", principal);
    printf("Rate: %f%%\n", rate);
    printf("Time: %f years\n", time);
    printf("Simple Interest is: %f\n", simple_interest);
    printf("Compound Interest is: %f\n", compound_interest);
    printf("Total Amount with Compound Interest is: %f\n", amount);
    return 0;
}

