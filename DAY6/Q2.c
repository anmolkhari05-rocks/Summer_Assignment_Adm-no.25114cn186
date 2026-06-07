#include<stdio.h>
int main()
{
    int long binary;

    int decimal = 0 , base= 1, rem ;

    printf("ente rthe binary number: ");
    scanf("%ld",&binary);

    while ( binary > 0 )
    {
        rem = binary%10;
        decimal = decimal + rem * base;
        binary = binary %10;
    }
    printf("decimal = %d ", decimal);
    return 0 ; 

}
