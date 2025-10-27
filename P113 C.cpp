//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
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
    printf("Enter the value of k: ");
    scanf("%d", &k);   
    if(k > n || k <= 0)
    {
        printf("Invalid value of k.\n");
        return;
    }   
    for(int i = 0; i < k; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }   
    
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
}
