//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
void int main()
{
    char str[MAX], longest[MAX], word[MAX];
    int i, j, len, maxlen = 0;    
    printf("Enter a sentence: ");
    fgets(str, MAX, stdin);
    len = strlen(str);
    str[len - 1] = '\0'; 
    i = 0;
    while (i < len)
    {
        while (i < len && isspace(str[i]))
            i++;
        j = 0;
        while (i < len && !isspace(str[i]))
        {
            word[j++] = str[i++];
        }
        word[j] = '\0';
        if (j > maxlen)
        {
            maxlen = j;
            strcpy(longest, word);
        }
    }
    if (maxlen > 0)
        printf("The longest word is: %s\n", longest);
    else
        printf("No words found in the sentence.\n");
}
