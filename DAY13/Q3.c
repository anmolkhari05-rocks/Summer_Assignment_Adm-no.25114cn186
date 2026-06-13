#include<stdio.h>
int main()
{
    int n , i ;

    printf("enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter %d elemets: \n", n );
    for(i=0 ; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];

    for(i=1;i<n; i++)
    {
        if(arr[i]>largest)
        largest = arr[i];

        if(arr[i]<smallest)
        smallest = arr[i];
    }

    printf("largest elements = %d\n", largest);
    printf("smallest elements = %d\n", smallest );

    return 0 ;
}