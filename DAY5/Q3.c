#include<stdio.h>
int main ()
{
    int number, i ;

    printf("enter the numebr for the factorial: ");
    scanf("%d",&number);

    printf("factors of %d are: \n , n");

    for(i = 1 ; i<=number ; i++)
    {
        if (number %i == 0)
        {
            printf("%d" , i);
        }
    }
    return 0 ;
}