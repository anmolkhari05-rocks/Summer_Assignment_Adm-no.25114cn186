#include<stdio.h>
int main()
{
    int n , i , j ,minindex , temp;
    printf("enter number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements: \n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<n-i;i++)
    {
        minindex = i ;

        for(j=i+1;j<n;j++)
        
            if(arr[j]<arr[minindex])

        
        temp= arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }

    printf("sorted array:\n");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);

    return 0 ;
}