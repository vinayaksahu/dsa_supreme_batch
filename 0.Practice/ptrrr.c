#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an integer
    int *ptr = (int*)malloc(sizeof(int));

    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Assign a value to the allocated memory
    *ptr = 42;

    // Deallocate the memory, making the pointer dangling
    //free(ptr);

    // Accessing the memory through the dangling pointer can lead to undefined behavior
    printf("Dangling Pointer Value: %d\n", *ptr);

    return 0;
}
