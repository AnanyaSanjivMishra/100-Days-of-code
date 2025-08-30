//Q19.Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main()
{
	float side1, side2, side3;
	printf("Enter Length of Side 1: ");
	scanf("%f", &side1);
	printf("Enter Length of Side 2: ");
	scanf("%f", &side2);
	printf("Enter Length of Side 3: ");
	scanf("%f", &side3);
	if (side1==side2 && side2==side3 && side3==side1){
		printf("It is an equilateral triangle");
	}
	else if (side1==side2 || side2==side3 || side3==side1){
		printf("It is an isosceles triangle");
	}
	else {
		printf("It is an scalene triangle");
	}
	return 0;
}
