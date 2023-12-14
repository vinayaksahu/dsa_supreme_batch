#include<stdio.h>

#define MAX_SIZE 10
int mainArray[MAX_SIZE];
int minArray[MAX_SIZE];
int mainTop = -1; 
int minTop = -1;

int isFull() {
    return (mainTop == MAX_SIZE - 1);
}

int isEmpty() {
    return (mainTop == - 1);
}

void push(int data) {

    if(isFull()) {
        printf("Overflow\n");
        return;
    }

    mainArray[++mainTop] = data;

    if (minTop == -1 || minArray[minTop] > mainArray[mainTop])
        minArray[++minTop] = data;
}

void pop() {

    if(isEmpty())
        printf("Underflow");

    mainTop--;

    if (minArray[minTop] == mainArray[mainTop])
        minTop--;
}

void display() {

    printf("Elements are: "); 
    while (!isEmpty()) {
        printf("%d ", mainArray[mainTop]);
        pop();
    } printf("\n");
}

int min_stack() {
    return minArray[minTop];
}

int main() {

    push(10);
    push(15);
    push(6);
    push(5);
    push(13);

    printf("Min of Stack: %d\n", minArray[minTop]);
    printf("Main of Stack: %d\n", mainArray[mainTop]);
    pop();
    pop();

    printf("Min of Stack: %d\n", minArray[minTop]);
    printf("Main of Stack: %d\n", mainArray[mainTop]);

    
    return 0;
}
