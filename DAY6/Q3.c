#include<stdio.h>
int main()
{
    int number , count = 0 ;

    printf("enter  a number: ");
    scanf("%d",&number);

    while(number !=0)
    {
        count +=number & 1 ;
        number = number >> 1 ;
    }
    printf("number of set bits = %d", count);

    return 0 ;
}