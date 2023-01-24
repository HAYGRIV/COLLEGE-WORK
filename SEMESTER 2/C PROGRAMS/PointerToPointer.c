#include<stdio.h>

void main()
{
    int **pptr,*ptr,num;

    //TAKING INPUT OF NUMBER
    printf("ENTER A NUMBER:");
    scanf("%d",&num);

    //ASSIGNING POINTER1 TO NUMBER
    ptr=&num;

    //ASSIGNING POINTER2 TO POINTER1
    pptr=&ptr;

    //DISPLAYING THE VALUE AND ADDRESS OF NUMBER USING POINTER2 
    printf("THE VALUE AT ADDRESS %d IS %d",*pptr,**pptr);
}