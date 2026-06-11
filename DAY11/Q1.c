#include<stdio.h>

int sum (int a , int b )
{
    return a+b ;
}

int main ()
{
    int a , b ;
    printf("enter the value of first number: ");
    scanf("%d",&a);

    printf("enter the value of second number: ");
    scanf("%d",&b);

    printf("sum= %d", sum(a,b));

    return 0 ;
}