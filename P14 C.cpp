//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main()
{
	char charac;
	printf("Enter a character: ");
	scanf("%c",&charac);
	if (charac == 'a' || charac == 'e' || charac == 'i' || charac == 'o' || charac == 'u' ||
        charac == 'A' || charac == 'E' || charac == 'I' || charac == 'O' || charac == 'U'){
		printf("Given Character is a Vowel");
	}
	else {
		printf("Given charatcer is a constant");
	}
	return 0;
}

