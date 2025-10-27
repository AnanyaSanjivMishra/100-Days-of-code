//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>
#define MAX 100
void main()
{
    int nums[MAX], answer[MAX];
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    for(i = 0; i < n; i++)
    {
        int product = 1;
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                product *= nums[j];
            }
        }
        answer[i] = product;
    }
    
    printf("The resulting array is: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }
    printf("\n");
    
}

