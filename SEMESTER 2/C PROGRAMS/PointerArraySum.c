#include <stdio.h>

void main()
{
    int *ptr;
    int Array[10];
    int *pptr;
    int sum=0;
    
    //ASSIGNING POINTER VARIABLE TO ARRAY
    ptr=Array;
    
    //SCANNING FOR ELEMENTS OF ARRAY USING POINTER
    printf("ENTER ELEMENTS OF ARRAY:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",ptr+i);
    }
    
    //DISPLAY THE ELEMENTS OF ARRAY USING POINTER
    printf("ENTERED ELEMENTS OF ARRAY ARE: ");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",*(ptr+i));
    }

    //ASSIGNING ARRAY TO POINTER
    pptr=Array;

    //SUM OF ELEMENTS OF ARRAY USING POINTER
    for(int i=0;i<10;i++)
    {
        sum=sum + *(pptr+i);
    }

    //DISPLAYING SUM OF ELEMENTS OF ARRAY
    printf("SUM OF ELEMENTS OF ARRAY IS: %d",sum);
}