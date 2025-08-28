//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main()
{
	float num1, num2, num3;
	printf("Enter Number 1: ");
	scanf("%f", &num1);
	printf("Enter Number 2: ");
	scanf("%f", &num2);
	printf("Enter Number 3: ");
	scanf("%f", &num3);
	if (num1 >= num2 && num1 >= num3){
		printf("Number 1 is Largest");
	}
	else if (num2 >= num3 && num2 >= num1){
		printf("Number 2 is Largest");
	}
	else if (num3 >= num2 && num3 >= num1){
		printf("Number 3 is Largest");
	}
	return 0;
}
