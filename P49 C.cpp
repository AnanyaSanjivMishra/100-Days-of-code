//Q49: Write a program to print the following pattern:
/*5
  45
  543
  5432
  54321*/

#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}   
