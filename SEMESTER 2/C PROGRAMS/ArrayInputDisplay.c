#include<stdio.h>

void main()
{
    int n;

    //TAKING INPUT OF THE SIZE OF ARRAY
    printf("ENTER SIZE OF ARRAY:");
    scanf("%d",&n);
    int a[n];
    
    //TAKING INPUT OF ARRAY ELEMENTS
    printf("ENTER ELEMENTS OF ARRAY:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    //DISPLAYING ELEMENTS OF ARRAY
    printf("ENTERED ELEMENTS OF ARRAY ARE:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}