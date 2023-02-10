#include <stdio.h>

//DECLARING AND DEFINING OF swap AND swapv FUNCTIONS
int swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
int swapv(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

int main()
{
    int a,b;
    printf("ENTER TWO NUMBERS TO BE SWAPPED:");
    scanf("%d %d",&a,&b);
    
    //WHEN CALLED BY VALUE
    swap(a,b);
    printf("WHEN CALLED BY VALUE: a=%d and b=%d\n",a,b);

    //WHEN CALLED BY REFERENCE
    swapv(&a,&b);
    printf("WHEN CALLED BY REFERENCE: a=%d and b=%d",a,b);
    return 0;
}