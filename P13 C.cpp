//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main()
{
	int year;
	printf("Enter Year:");
	scanf("%d",&year);
	if (year%4==0){
		printf("It's A Leap Year");		
	}
	else {
		printf("It is not a leap year");
	}
	return 0;
}
