//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
	float num1, num2,Sum,Difference,Product,Divide;
	printf("Enter Number 1:");
	scanf("%f", &num1);
	printf("Enter Number 2:");
	scanf("%f", &num2);
	Sum=("%f",num1+num2);
	if (num1>num2){
		Difference=("%f",num1-num2);
	}
	else {
		Difference=("%f",num2-num1);
	}
	Product=("%f",num1*num2);
	Divide=("%f",num1/num2);
	printf("Results Are As Follows:");
	printf("Sum: %f\n", Sum);
	printf("Difference: %f\n", Difference);
	printf("Product: %f\n", Product);
	printf("Divide: %f\n", Divide);
	return 0;
}


