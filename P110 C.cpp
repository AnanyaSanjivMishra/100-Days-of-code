//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>
#define MAX 100
void main()
{
    int arr[MAX];
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of subarray k: ");
    scanf("%d", &k);   
    if(k > n || k <= 0)
    {
        printf("Invalid subarray size.\n");
        return;
    }   
    
    printf("The maximum elements in each subarray of size %d are: ", k);
    for(int i = 0; i <= n - k; i++)
    {
        int max_elem = arr[i];
        for(int j = 1; j < k; j++)
        {
            if(arr[i + j] > max_elem)
            {
                max_elem = arr[i + j];
            }
        }
        printf("%d ", max_elem);
    }
    printf("\n");
}
