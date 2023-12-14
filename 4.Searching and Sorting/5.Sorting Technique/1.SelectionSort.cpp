#include <stdio.h>

// Function to perform selection sort on an array
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    
    // Traverse the array
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in the unsorted part
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the first element
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Original array: \n");
    printArray(arr, n);
    
    // Perform selection sort
    selectionSort(arr, n);
    
    printf("Sorted array: \n");
    printArray(arr, n);
    
    return 0;
}
