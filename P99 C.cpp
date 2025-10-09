//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main(){
    char date[20], newdate[20], month[4];
    printf("Enter the date in dd/04/yyyy format: ");
    scanf("%s", date);
    int len=strlen(date);
    for(int i=0; i<len; i++){
        if(date[i]=='0' && date[i+1]=='4'){
            month[0]='A';
            month[1]='p';
            month[2]='r';
            month[3]='\0';
            strcat(newdate, month);
            i=i+2;
        }
        else{
            char k=date[i];
            char temp[2];
            sprintf(temp, "%c", k);
            strcat(newdate, temp);
        }
    }
    printf("The date in dd-Apr-yyyy format is: %s\n", newdate);
    return 0;  
}
