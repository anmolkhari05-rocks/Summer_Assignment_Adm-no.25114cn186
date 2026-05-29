#include<stdio.h>
int main()
{

    int number, i ;
    long factorial =1 ;

    printf("Enter the number whose factorial is to be calculated: ");
    scanf("%d" , &number);

    if(number < 0)
    {
        printf("factorial of a negative number does not exist");
    }
    else{
        for(i=1;i<=number;i++)
        {
            factorial = factorial * i;
        }
         printf("factorial of %d = %1d",number, factorial);
   }
  return 0 ;
}