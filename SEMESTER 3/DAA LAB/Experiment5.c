#include <stdio.h>

// Function to merge two subarrays of arr[]
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive function to sort an array using Merge Sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Find the middle point
        int m = l + (r - l) / 2;

        // Sort the first half
        mergeSort(arr, l, m);

        // Sort the second half
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
	int i;
	
    printf("Given array is \n");
    for(i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Perform Merge Sort
    mergeSort(arr, 0, arr_size - 1);

    printf("Sorted array is \n");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


/*Pseudocode
function mergeSort(arr)
    if length(arr) <= 1
        return arr

    // Split the array into two halves
    mid = length(arr) / 2
    left = mergeSort(arr[0, mid])
    right = mergeSort(arr[mid, length(arr)])

    // Merge the two sorted halves
    return merge(left, right)

function merge(left, right)
    result = []
    leftIndex = 0
    rightIndex = 0

    // Compare elements from both halves and merge them
    while leftIndex < length(left) and rightIndex < length(right)
        if left[leftIndex] < right[rightIndex]
            result.append(left[leftIndex])
            leftIndex++
        else
            result.append(right[rightIndex])
            rightIndex++

    // Append any remaining elements from left and right sublists
    result.append(left[leftIndex, length(left) - leftIndex])
    result.append(right[rightIndex, length(right) - rightIndex])

    return result
*/

/*Algorithm
Merge Sort is a divide-and-conquer sorting algorithm that works as follows:

1. Divide: Divide the unsorted list into n sublists, each containing one element (a single element is already considered sorted).
2. Conquer: Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining.
3. Combine: The final merged sublist is now the sorted list.
*/
