//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("Enter a number(a): ");
	scanf("%d", &a);
	printf("Enter a number(b): ");
	scanf("%d", &b);
	printf("Enter a number(c): ");
	scanf("%d", &c);
    float root1 = (-b+sqrt(b*b-4*a*c))/2*a;
	float root2 = (-b+sqrt(b*b-4*a*c))/2*a;
	printf("Root 1 is: %f", root1);
	printf("Root 2 is: %f", root2);
	float D = b*b-4*a*c;
	printf("discriminant is %f", D);
	if (D > 0){
		printf("Roots are real and distinct");
	}
	else if(D==0){
		printf("Roots are real and equal");
	}
	else{
		printf("Roots are imaginary");
	}
	return 0;
	
}
