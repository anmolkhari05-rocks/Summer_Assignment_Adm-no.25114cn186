#include<stdio.h>

int main()
{
    int n1, n2 , i ;

    printf("enter size of first array: ");
    scanf("%d",&n1);

    int a[n1];

    printf("enter elements of first array:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[1]);
    }

    printf("enter size od second array: ");
    scanf("%d",&n2);

    int b[n2];

    printf("enter elements of second array:\n ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    int merged[n1+n2];

    for (i=0;i<n1;i++)
    {
        merged[i] = a[i];
    }

    for(i=0;i<n2;i++)
    {
        merged[n1+ i ]=b[i];

    }

    printf("merged array: ");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",merged[i]);
    }

    return 0 ;
}

