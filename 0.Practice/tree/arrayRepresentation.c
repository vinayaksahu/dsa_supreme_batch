#include <stdio.h>

#define MAX_SIZE 100

// Array representation of a binary tree
int binaryTree[MAX_SIZE];

void initializeTree() {
    for (int i = 0; i < MAX_SIZE; i++) {
        binaryTree[i] = -1;  // Initialize array with -1 (indicating empty node)
    }
}

void insert(int data, int index) {
    binaryTree[index] = data;
}

void printTree() {
    for (int i = 0; i < MAX_SIZE; i++) {
        if (binaryTree[i] != -1) {
            printf("%d ", binaryTree[i]);
        }
    }
    printf("\n");
}

int main() {
    initializeTree();

    insert(1, 0);
    insert(2, 1);
    insert(3, 2);
    insert(4, 3);
    insert(5, 4);

    printf("Array representation of binary tree: ");
    printTree();

    return 0;
}
