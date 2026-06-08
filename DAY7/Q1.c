#include<stdio.h>
int n 
long long factorial 
{
    if(n==0 || n==1)
    return 1 ; 
    else 
    return n*factorial (n-10)

}

int main()
{
    int n ;

    printf("enter a number: ");
    scanf("%d",&n);

    if(n<0)
    printf("factorial is not defined for negative numbers: ");
    else
    printf("factorial of %d = %lld", n , factorial(n));

    return 0 ;
}