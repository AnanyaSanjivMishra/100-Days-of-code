//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number");
	scanf("%d", &num);
	switch (num){
		case 1:
			printf("Month=January");
			printf("Days=31");
			break;
		case 2:
			printf("Month=February");
			printf("Days=28");
			break;
		case 3:
			printf("Month=March");
			printf("Days=31");
			break;
		case 4:
			printf("Month=April");
			printf("Days=30");
			break;
		case 5:
			printf("Month=May");
			printf("Days=31");
			break;
		case 6:
			printf("Month=June");
			printf("Days=30");
			break;
		case 7:
			printf("Month=July");
			printf("Days=31");
			break;
		case 8:
			printf("Month=August");
			printf("Days=31");
			break;
		case 9:
			printf("Month=September");
			printf("Days=30");
			break;
		case 10:
			printf("Month=October");
			printf("Days=31");
			break;
		case 11:
			printf("Month=November");
			printf("Days=30");
			break;
		case 12:
			printf("Month=December");
			printf("Days=31");
			break;
		default:
			printf("Pleae enter the number between (1-12)");
	}
	return 0;
}
