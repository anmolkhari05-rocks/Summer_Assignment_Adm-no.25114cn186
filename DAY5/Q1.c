#include<stdio.h>
int main ()
{
    int number, sum =0;

    printf("enter the number to be checkked: ");
    scanf("%d",&number);

    if(number<=1)
    {
        printf("Perfect number must be greater than 1");
        return 0 ;
    }

    int i ;
    for(i=1;i<=number-1;i++)
    {
        if(number % i== 0)
        {
            sum = sum + i ;
        }

    } 
    
    if(sum==number)
    {
     printf("%d is the perfect number",number);
    }    
    else 
    {
     printf("%d is not a perfect number", number);
    }
    return 0 ;    
}