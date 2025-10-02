//Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>  
#include <string.h>
int main()  
{  
    char str[100];  
    int i, spaces = 0, digits = 0, specialChars = 0;        
    printf("Enter a string: ");  
    fgets(str, sizeof(str), stdin);        
    for(i = 0; str[i] != '\0'; i++)  
    {  
        if(str[i] >= '0' && str[i] <= '9')  
        {  
            digits++;  
        }  
        else if(str[i] == ' ')  
        {  
            spaces++;  
        }  
        else if((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || 
                (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~'))  
        {  
            specialChars++;  
        }  
    }        
    printf("Number of spaces: %d\n", spaces);  
    printf("Number of digits: %d\n", digits);  
    printf("Number of special characters: %d\n", specialChars);       
    return 0;  
}
