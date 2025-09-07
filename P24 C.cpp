//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
#include <stdio.h>
int main() {
    
    int units;
    int bill = 0; 
    printf("Enter the unit of electricity bill: ");
    scanf("%d", &units);    
    if (units <= 0) {
        printf("No Electricity Bill. Thank you!\n");
    } else if (units <= 100) {
        bill = units * 5;
        printf("Your bill is: %d\n", bill);
    } else if (units<=200){  
        bill = (100 * 5) + (units - 100) * 7;
        printf("Your bill is:%d\n", bill);
    } else if (units <= 300){
        bill =(100*2) + (100*4) + (units - 200) * 10;
        printf("Your bill  is: %d\n", bill);
    } else{
        bill=(100*2) + (100*4) + (100*7) + (units - 300) * 12;
        printf("Your bill  is: %d\n", bill);
    }
    return 0; 
}
