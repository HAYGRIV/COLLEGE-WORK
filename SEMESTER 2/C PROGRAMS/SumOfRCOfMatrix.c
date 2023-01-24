#include <stdio.h>

void main()
{
    int n,m[3][3];
    int rsum=0,csum=0;
    int i,j;
    //TAKING INPUT OF SIZE
    printf("INPUT SIZE:");
    scanf("%d",&n);

    //TAKING INPUT OF MATRIX ELEMENTS
    printf("ENTER ELEMENTS OF MATRIX:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    //DISPLAYING THE ELEMENTS OF MATRIX
    printf("THE MATRIX IS:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    //SUM OF ROWS OF MATRIX
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            rsum = rsum + m[i][j];
        }
        printf("SUM OF ROW %d: %d\n",i+1,rsum);
        rsum=0;
    }

    //SUM OF COLUMN OF MATRIX
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            csum = csum + m[j][i];
        }
        printf("SUM OF COLUMN %d: %d\n",i+1,csum);
        csum=0;
    }
}