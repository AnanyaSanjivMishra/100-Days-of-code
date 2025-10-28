//Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

#include <stdio.h>
#define MAX 100
void main()
{
    int arr[MAX], nextGreater[MAX];
    int n, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
    for(i = 0; i < n; i++)
    {
        nextGreater[i] = -1; // Default value if no greater element is found
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                nextGreater[i] = arr[j];
                break; // Exit inner loop once the next greater element is found
            }
        }
    }   
    printf("The next greater elements are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d", nextGreater[i]);
        if(i < n - 1)
            printf(", ");
    }
    printf("\n");
}
