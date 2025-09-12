//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main()
{
        int n,i;
        double sum=0.0;
        printf("Enter the numebr of terms; ");
        scanf("%d",&n);
        if(n<=0)
        {
                printf("Invalid Input");
                return 0;
        }
        for(i=0;i<=n;i++)
        {
            sum+=2.0*(i+1)/(3*i+4);
        }
        printf("Approximate sum: %f\n", sum);
        return 0;
}
