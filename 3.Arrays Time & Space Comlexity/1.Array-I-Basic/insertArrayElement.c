#include <stdio.h>

// Function to insert an element at a given position in the array
void insertElement(int arr[], int size, int position, int element) {
    if (position < 0 || position > size) {
        printf("Invalid position for insertion.\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Update the array size
    size++;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Inserting element 10 at position 2
    insertElement(arr, size, 2, 10);
    size++;

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
