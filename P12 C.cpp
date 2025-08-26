//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main()
{
	float num;
	printf("Enter a number:");
	scanf("%f",&num);
	if (num>0){
		printf("Given Number is Positive");
	}
	else if (num<0){
		printf("Given Number is Negative");
	}
	else {
		printf("Given Number is Zero");
	}
	return 0;
}
