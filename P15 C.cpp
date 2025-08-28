//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z'){
		printf("Upper Case Alphabet");
	}
	else if (ch >= 'a' && ch <= 'z'){
		printf("Lower Case Alphabet");
	}
	else if (ch >= '0' && ch <= '9'){
		printf("Digit");
	}
	else {
		printf("Special Character");
	}
	return 0;
}
