#include<stdio.h>
int main()
{
   int flag , end, start, i, j;

   printf("Enter the starting number: ");
   scanf("%d", &start);

   printf("Enter the ending number: ");
   scanf("%d",&end);

   printf("prime number between %d and %d are: \n", start, end);

   for(i=start; i<=end; i++)
   {
       flag=0;

       for(j=2; j<=i/2; j++)
       {
           if(i%j==0)
           {
               flag=1;
               break;
           }
       }

       if(flag==0 && i!=1)
       {
           printf("%d ", i);
       }
    return 0;
}