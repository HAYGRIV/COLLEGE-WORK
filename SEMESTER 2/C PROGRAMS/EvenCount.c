#include <stdio.h>

void main()
{
    int m[3][3],c_even=0;
    int i,j;

    //TAKING INPUT OF MATRIX ELEMENTS
    printf("ENTER ELEMENTS OF MATRIX:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    //DISPLAYING MATRIX
    printf("THE MATRIX IS:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    //CHECKING FOR NUMBER OF EVEN NUMBERS IN MATRIX
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m[i][j]%2==0)
            c_even++;
        }
    }

    //DISPLAYING NUMBER OF EVEN NUMBERS IN MATRIX
    printf("NUMBER OF EVEN NUMBERS IN MATRIX ARE %d",c_even);

}