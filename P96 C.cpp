//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
void reverseWords(char str[]) {
    int start = 0, end = 0, len = strlen(str);
    while (end <= len) {
        if (str[end] == ' ' || str[end] == '\0') {
            int left = start, right = end - 1;
            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
            start = end + 1;
        }
        end++;
    }
}
int main() {
    char str[MAX];
    printf("Enter a sentence: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = 0; 
    reverseWords(str);
    printf("Sentence with each word reversed: %s\n", str);
    return 0;
}
