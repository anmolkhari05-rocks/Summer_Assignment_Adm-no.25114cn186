#include<stdio.h>
int main()
{
    int number , binary, i = 0 ;

    printf("enter a decimal number: ");
    scanf("%d",&number);

    if(number= 0 )
    {
        printf("the binary = 0 ");
        return 0 ; 
    }

    while(number > 0 )
    {
        binary = number %2 ;
        number = number / 2 ;
        i ++ ;
    }
    printf("binary = ");
    for ( int j = i-1 ; j>=0; j--)
    {
        printf("%d",binary);
    }
    return 0 ; 
}