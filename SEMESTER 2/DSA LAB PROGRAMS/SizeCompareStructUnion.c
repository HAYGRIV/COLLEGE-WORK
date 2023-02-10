#include<stdio.h>

//DECLARING AND DEFINING STRUCTURE DATATYPE
struct stud
{
    char name[50];
    int rollno;
    float AverageMarks;
};
//DECLARING AND DEFINING UNION DATATYPE
union std
{
    char name[50];
    int rollno;
    float AverageMarks;
};

void main()
{
    struct stud s1;
    union std s2;
    
    //DISPLAYING AND COMPARING THE SIZE OF STRUCTURE AND UNION
    printf("%d\n",sizeof(s1));
    printf("%d\n",sizeof(s2));
}