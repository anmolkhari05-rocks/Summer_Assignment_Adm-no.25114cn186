#include<stdio.h>
int main()
{
    int number , original , reverse = 0 , remainder ; 

    printf("enter the number: ");
    scanf("%d",&number);
    original = number ;
    while(number!=0)
    {
        remainder = number%10;
        reverse = reverse*10 + remainder;
        number = number/10;
    }
    if (original == reverse)
    {
        printf("the number is a palindrome");
    }
    else
    {
        printf("the number is not a palindrome");
    }
    return 0;
} 