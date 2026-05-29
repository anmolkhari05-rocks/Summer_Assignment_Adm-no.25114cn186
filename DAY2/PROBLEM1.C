#include<stdio.h>
int main()
{
    int number,digit,sum=0;

    printf("enter the number whose digit sum is to be calculated: ");
    scanf("%d",&number);

    if (number==0)
    {
        printf("the sum of the digits is zero:");
    }
    else
    {digit=number%10;
        sum=sum+digit;
        number=number/10;  
    }
    
    printf("the sum of the digits are %d",sum);
    return 0 ;
}