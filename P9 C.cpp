//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time;
    float si, ci, amt;
    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (R in %%): ");
    scanf("%f", &rate);
    printf("Enter the time period in years (T): ");
    scanf("%f", &time);
    si = (principal * rate * time) / 100.0;
    amt = principal * pow((1 + rate / 100.0), time);
    ci = amt - principal;   
    printf("Calculating Interest for:\n");
    printf("Principal: %f\n", principal);
    printf("Rate: %f%%\n", rate);
    printf("Time: %f years\n", time);
    printf("Simple Interest is: %f\n", si);
    printf("Compound Interest is: %f\n", ci);
    printf("Total Amount with Compound Interest is: %f\n", amt);
    return 0;
}



