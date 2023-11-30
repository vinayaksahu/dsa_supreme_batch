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
    }
}

int min_stack() {
    return minArray[minTop];
}

int main() {

    push(105);
    push(20);
    push(130);
    push(410);
    push(501);
    push(1051);
    push(120);
    push(30);
    push(40);
    push(50);
    push(105);
    push(201);
    push(310);
    push(450);
    push(505);

    printf("Min of Stack: %d\n", minArray[minTop]);

    display();
    
    return 0;
}
