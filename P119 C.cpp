//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int seen[1000] = {0}; 
    int repeatedElement = -1;
    
    for(i = 0; i < n; i++) {
        if(seen[arr[i]] == 1) {
            repeatedElement = arr[i];
            break;
        }
        seen[arr[i]] = 1;
    }
    
    if(repeatedElement != -1) {
        printf("The repeated element is: %d\n", repeatedElement);
    } else {
        printf("No repeated element found.\n");
    }
    
    return 0;
}
