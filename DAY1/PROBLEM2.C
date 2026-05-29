#include<stdio.h>
int main(){

    int number, table ;

    printf("enter the number whose table is to be printed: ");
    scanf("%d",&number);

    printf("The table of the required number is");
    int i=0;
    while(i<=10)
    {
        printf("%d \n" ,table = i*number);
        i=i+1;
    }
    
    printf("Thank you");

    return 0;
}