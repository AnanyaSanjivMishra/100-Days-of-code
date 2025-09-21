//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int num, digit, maxCount = 0, Digit = -1;
    int count[10] = {0}; 
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            Digit = i;
        }
    }
    printf("The digit that occurs the most is: %d\n", Digit);
    return 0;
}

