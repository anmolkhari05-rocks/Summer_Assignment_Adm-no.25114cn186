#include<stdio.h>
int main()
{
    void printtable(int number);
    int number ;

    printf("enter the number whose table is to be printed: ");
    scanf("%d",&number);

    printtable(number);

    printf("the table of the required number is: ");
    printtable(number);
    return 0 ;    
}

void printtable(int number)
{
    int i;
    for (i=1;i<=10;i++)
    {
        printf("%d \n" , number*i);
    }
}