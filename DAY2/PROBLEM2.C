#include<stdio.h>
int main()
{
    int number , digit , reverse=0;

    printf("enter the first number: ");
    scanf("%d",&number);


    while(number !=0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit ;
        number = number/10 ;
    }
    printf("the reverse digits of the number are: %d", reverse);
    return 0 ;
}