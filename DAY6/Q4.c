#include<stdio.h>
int main()
{
    int x , n , i ;
    long result = 1 ;

    printf("enter base (x): ");
    scanf("%d",&x);

    printf("enter the exponent (n) : ");
    scanf("%d",&n);

        for(i= 1 ; i<= n ; i ++)
        {
            result = result * x;
        }
        printf("%d^%d = %ld", x , n , result);
    return 0;
}