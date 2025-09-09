//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    char binary_num[100];
    int i;
    printf("Enter a binary number: ");
    scanf("%s", binary_num);
    for (i = 0; binary_num[i] != '\0'; i++) {   
        if (binary_num[i] != '0' && binary_num[i] != '1') {
            printf("Error! '%s' is not a valid binary number.\n", binary_num);
            return 1; 
        }
    }
    printf("\nOriginal binary: %s\n", binary_num);
    for (i = 0; binary_num[i] != '\0'; i++) {       
        if (binary_num[i] == '1') {
            binary_num[i] = '0';
        }       
        else {
            binary_num[i] = '1';
        }
    }   
    printf("1's complement:  %s\n", binary_num);
    return 0; 
}
