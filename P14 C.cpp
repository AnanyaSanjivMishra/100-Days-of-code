//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main()
{
	char character;
	printf("Enter a character: ");
	scanf("%c",&character);
	if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U'){
		printf("Given Character is a Vowel");
	}
	else {
		printf("Given charatcer is a constant");
	}
	return 0;
}
