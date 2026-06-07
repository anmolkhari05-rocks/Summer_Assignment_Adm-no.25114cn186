#include<stdio.h>
int main()
{
    int long number , largest_prime_number=0 ;
    printf("enter the number to be checked: ");
    scanf("%d",&number);

    while(number%2==0)
    {
        largest_prime_number=2;
        number/=2;
    }
    for(long long i = 3; i*i <=number; i+=2)
    {
        while(number%i==0)
        {
            largest_prime_number = i ; 
            number/=i;
        }
    }
    if(number>2)
    
        largest_prime_number = number ;
    printf("the largest prime factor of the number is: %d", largest_prime_number);
    return 0 ;

}