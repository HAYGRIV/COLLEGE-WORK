#include <stdio.h>
#include <stdlib.h>

struct node                                  //CREATING A STRUCTURE Node
{
    int num;                                 //DATA OF NODE
    struct node *nextptr;                    //ADDRESS OF NEXT NODE
}*stnode;

void CreateNodeList(int);                    //FUNCTION TO CREATE THE LIST
void DisplayList();                          //FUNCTION TO DISPLAY THE LIST

int main()
{
    int n;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    CreateNodeList(n);
    printf("\n Data entered in the list : \n");
    DisplayList();
    return 0;
}

void CreateNodeList(int n)                   //CreateNodeList() DEFINITION
{
    struct node *fnNode, *tmp;
    int num,i;
    stnode=(struct node*)malloc(sizeof(struct node));

    if(stnode==NULL)                         //CHECK WHETHER THE fnNode IS NULL AND IF SO NO MEMORY ALLOCATION
    {
        printf("MEMORY CAN NOT BE ALLOCATED...");
    }

    else
    {
        printf(" Input data for node 1 : ");//READS DATA FOR THE NODE THROUGH KEYBOARD
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL;             //LINKS THE ADDRESS FIELD TO NULL
        tmp = stnode;                       //CREATING n NODES AND ADDING TO LINKED LIST
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                fnNode->num = num;          //LINKS THE NAME FIELD OF fnNode WITH num
                fnNode->nextptr = NULL;     //LINKS THE ADDRESS FIELD OF fnNode WITH NULL
                tmp->nextptr = fnNode;      //LINKS PREVIOUS NODE i.e. tmp TO THE fnNode
                tmp = fnNode;
            }
        }
    }
}

void DisplayList()                           //DisplayList() DEFINITION
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);//PRINTS THE DATA OF CURRENT NODE
            tmp = tmp->nextptr;              //ADVANCES THE POSITION OF CURRENT NODE
        }
    }
}
