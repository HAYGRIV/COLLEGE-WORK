#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_SIZE 10

int RandomArray()
{
	int i;
    srand(time(NULL));
    int myArray[ARRAY_SIZE];
    for (i = 0; i < ARRAY_SIZE; i++) 
	{
        myArray[i] = rand() % 10; 
    }
    
    printf("Randomly Generated Array Is:\n");
    for (i = 0; i < ARRAY_SIZE; i++) 
	{
        printf("%d\n", myArray[i]);
    }
}

int RandomNumSearch()
{
	int i;
	int myArray[ARRAY_SIZE];
	srand(time(NULL));
    int randomNum = rand() % 10;

    int found = 0;
    for (i = 0; i < ARRAY_SIZE; i++) 
	{
        if (myArray[i] == randomNum) 
		{
            found = 1;
            break;
        }
    }

    printf("Random Number: %d\n", randomNum);
    if (found) 
	{
        printf("%d is present in the array.\n", randomNum);
    } 
	else 
	{
        printf("%d is not present in the array.\n", randomNum);
    }
}
int main() 
{
	int Random_Array = RandomArray();
	int Random_Num_Search = RandomNumSearch();
    
    return 0;
}


