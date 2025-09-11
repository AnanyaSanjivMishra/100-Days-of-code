//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main() {
    int n, i;
    double sum = 0.0;  
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);  
    if (n <= 0) {
        printf("Please enter a positive number for the terms.\n");
        return 1; 
    }
    printf("\nCalculating the sum of the series: ");   
    for (i = 1; i <= n; i++) {    
        if (i == 1) {
            sum += 1.0;
            printf("1");
        }    
        else {         
            double term = (double)(2 * i - 1) / (2 * i);
            sum += term;
            printf(" + %d/%d", (2 * i - 1), (2 * i));
        }
    }
    printf("\n\nSum of the series up to %d terms is: %lf\n", n, sum);
    return 0;
}
