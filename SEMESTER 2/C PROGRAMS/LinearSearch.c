#include <stdio.h>

int main()
{
    int i,a[10],item,pos,flag=0;
    
    //TAKING INPUT OF ELEMENTS OF ARRAY
    printf("ENTER 10 NUMBERS:\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    
    //TAKING INPUT OF THE ELEMENT TO BE SEARCHED
    printf("ENTER NUMBER TO BE SEARCHED:");
    scanf("%d",&item);
    
    //CREATING LOOP TO START SEARCHING
    for(i=0;i<10;i++)
    {
        if(a[i]==item)
        {
            pos=i+1;
            flag=1;
            break;
        }
    }
   
    //APPLYING CONDITION AND PRINTING THE RESULT
    if(flag==0)
    printf("SEARCH UNSUCCESSFUL...");

    else
    printf("ITEM FOUND AT POSITION= %d",pos);

    return 0;
}