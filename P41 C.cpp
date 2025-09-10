//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, Num, Digit1, Digit3, Digit2;
    int powerOf10 = 1;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    int temp = num;
    if (temp < 10) {
        printf("The number has only one digit. No swapping needed.\n");
        printf("Original number: %d\n", num);
        printf("Swapped number:  %d\n", num);
        return 0;
    }
    Digit3 = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        powerOf10 *= 10;
    }
    Digit1 = temp;
    Digit2 = (num % powerOf10) / 10;
    Num = (Digit3 * powerOf10) + (Digit2 * 10) + Digit1;
    printf("Original number: %d\n", num);
    printf("Swapped number:  %d\n", Num);
    return 0;
}
