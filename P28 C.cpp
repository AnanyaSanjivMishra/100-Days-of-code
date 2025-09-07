//Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main()
{
	int i;
	int n;
	int num;
	long long int product = 1;
	printf("Enter number of even numbers:");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		num = 2*i;
		printf("%d", &num);
 		product = product*num;
		printf("\nThe product is: %d\n", product); 
	}
	return 0;
}
