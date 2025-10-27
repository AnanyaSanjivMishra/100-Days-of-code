//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>
#define MAX 100
void main()
{
    int nums1[MAX], nums2[MAX], merged[MAX];
    int m, n, i, j, k;
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &m);
    printf("Enter %d integers in sorted order: ", m);
    for(i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &n);
    printf("Enter %d integers in sorted order: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }   
    i = 0; 
    j = 0; 
    k = 0; 
    while(i < m && j < n)
    {
        if(nums1[i] < nums2[j])
        {
            merged[k++] = nums1[i++];
        }
        else
        {
            merged[k++] = nums2[j++];
        }
    }   
    while(i < m)
    {
        merged[k++] = nums1[i++];
    }   
    while(j < n)
    {
        merged[k++] = nums2[j++];
    }   
    printf("The merged sorted array is: ");
    for(i = 0; i < m + n; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
}
