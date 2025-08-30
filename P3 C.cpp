//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
	float len,bread,area,peri;
	printf("Enter Length:");
	scanf("%f",&len);
	printf("Enter Breadth");
	scanf("%f",&bread);
	area=("%f",len*bread);
	perimeter=("%f",2*(len+bread));
	printf("Area is:%f/n",area);
	printf("Perimeter is: %f/n",peri);
	return 0;
}


