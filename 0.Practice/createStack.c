#include<stdio.h>

#define SIZE 5
int stack[SIZE];
int top = -1;

void push (int data) {
    if (SIZE - top > 1) {
        stack[++top] = data;
        return;
    }

    printf("Overflow");
    
}

int main() {

    push(10);
    push(10);
    push(10);
    push(10);
    push(10);
    push(10);
    
    return 0;
}
