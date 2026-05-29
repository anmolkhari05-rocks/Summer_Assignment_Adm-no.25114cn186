#include<stdio.h>
int main(){

    int number,sum=0 ;

    printf("Enter the number whose sum is to be calculated: ");
    scanf("%d",&number);

    int i =1;
    while(i<=number)
    {
        sum=sum+i;
        i=i+1;
    }

    printf("Sum of all N natural number is= %d" , sum);

    printf("Thank you");
    return 0 ;
}