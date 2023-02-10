#include <stdio.h>

void main()
{
    int *ptr,num;

    //TAKING INPUT OF NUMBER
    printf("ENTER A NUMBER:");
    scanf("%d",&num);

    //ASSIGNING POINTER TO NUMBER
    ptr=&num;

    //DISPLAYING VALUE AND ADDRESS OF NUMBER USING POINTER
    printf("NUMBER IS %d AND ITS ADDRESS IS %d",*ptr,ptr);
}