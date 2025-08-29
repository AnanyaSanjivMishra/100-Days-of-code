//Q18: Write a program to assign grades based on a percentage input.

#include <stdio.h>
int main()
{
	float per;
	printf("Enter the percentage acquiured: ");
	scanf("%f", &per);
	if(85<per && per<=100){
		printf("Grade A");
	}
	else if(75<per && per<=85){
		printf("Grade B");
	}
	else if(65<per && per<=75){
		printf("Grade C");
	}
	else if(55<per && per<=65){
		printf("Grade D");
	}
	else if(40<per && per<=55){
		printf("Grade E");
	}
	else{
		printf("Grade F");
	}
	return 0;
}
