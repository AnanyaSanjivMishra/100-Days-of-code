//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>
#define MAX 100
void main()
{
    char s[MAX];
    printf("Enter a string: ");
    fgets(s, MAX, stdin);
    int len = strlen(s);
    if(s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    int maxLength = 0;
    for(int i = 0; i < len; i++)
    {
        int visited[256] = {0};
        int currentLength = 0;
        for(int j = i; j < len; j++)
        {
            if(visited[(unsigned char)s[j]] == 1)
            {
                break;
            }
            else
            {
                visited[(unsigned char)s[j]] = 1;
                currentLength++;
            }
        }
        if(currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    printf("The length of the longest substring without repeating characters is: %d\n", maxLength);
}
