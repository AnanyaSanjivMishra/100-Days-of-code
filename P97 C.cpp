//Q97: Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }
    printf("Initials: ");
    int i = 0;
    while (name[i] != '\0') {
        if (i == 0 || (name[i - 1] == ' ' && isalpha(name[i]))) {
            printf("%c", toupper(name[i]));
        }
        i++;
    }
    printf("\n");
    return 0;
}
