#include<stdio.h>
int main(){
    int number , count=0 ;

    printf("Enter the number: ");
    scanf("%d",&number);

    if(number==0) 
    {
        count = 1;
    }
    while(number !=0)
    {
        number= number/10 ;
        count++;
    }

    printf("Total digits = %d" , count);

    return 0;
}
