#include <stdio.h>

void BubbleSort(int arr[], int n) 
{
    int temp;
    int Swapped;
	int i;
	
    do 
	{
        Swapped = 0; // Flag to check if any elements were swapped in this pass

        for(i = 0; i < n - 1; i++) 
		{
            // If the current element is greater than the next element, swap them
            if (arr[i] > arr[i + 1]) 
			{
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                Swapped = 1; // Setting the swapped flag to 1
            }
        }
    } 
	while(Swapped);
}

int main() 
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
	int i;
	
    printf("Original array: ");
    for(i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }

    BubbleSort(arr, n);

    printf("\nSorted array: ");
    for(i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}


/*Pseudocode
procedure bubbleSort(arr: array of integers)
    n = length(arr)
    swapped = true
    while swapped is true
        swapped = false
        for i from 1 to n - 1
            if arr[i-1] > arr[i]
                swap(arr[i-1], arr[i])
                swapped = true
        end for
    end while
end procedure
*/

/*Algorithm
1. Start with an array arr of integers.
2. Get the length of the array and store it in a variable n.
3. Initialize a boolean variable swapped to true.
4. While swapped is true, repeat the following steps:
	a. Set swapped to false.
	b. Iterate through the array from index 1 to n - 1 using a for loop.
	c. Compare the element at index i-1 with the element at index i. If arr[i-1] is greater than arr[i], then swap the elements.
	d. Set swapped to true to indicate that elements were swapped in this pass.
	e. Repeat the for loop until you've gone through the entire array once.
5. Repeat steps 4 until no elements are swapped in a pass, which indicates that the array is sorted.
6. The array is now sorted in ascending order.
*/
