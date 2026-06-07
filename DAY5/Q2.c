#include<stdio.h>
int main ()
{
    int number,temp , rem, sum=0, fact ,  i ;

    printf("enter the number to be checked: ");
    scanf("%d",&number);

    temp = number;
    rem = 0;

    while(temp>0)
    {
        rem= temp %10;

        fact=1;
        for(i=1 ; i<=rem; i++)
        {
            fact= fact * i ;
        }
        sum = sum + fact;
        temp = temp/10;

    }
    if(sum == number)
    printf("%d is a strong number", number);
    else
    printf("%d is not a strong number" , number);

    return 0 ; 
}

