#include<stdio.h>
int main()
{
    int a, b , upper , temp , LCM ;

    printf("enter the first number: ");
    scanf("%d", &a);

    printf("enter the second number: ");
    scanf("%d",&b);

    upper= a*b;

    while(b != 0 )
    {
        temp=b;
        b=a%b;
        a=temp;
    }

    LCM=upper/a;

    printf("LCM of the numbers are= %d", LCM);

    return 0 ;
}
    