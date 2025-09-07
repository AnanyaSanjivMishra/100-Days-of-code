//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, profit, loss;
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &cp);
    printf("Enter the Selling Price (SP): ");
    scanf("%f", &sp);
    if (sp > cp) {
        profit = sp - cp;
        float profit_percent = (profit / cp) * 100;
        printf("Profit Percentage: %f%%\n", profit_percent);
    } else if (cp > sp) {
        loss = cp - sp;
        float loss_percent = (loss / cp) * 100;        
        printf("Loss Percentage: %f%%\n", loss_percent);
    } else {     
        printf(" No Profit,  Loss.\n");
    }
    return 0; 
}
