#include<Stdio.h>
int main ()
{
    int i , n ;

    printf("enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }

    return 0 ;
}