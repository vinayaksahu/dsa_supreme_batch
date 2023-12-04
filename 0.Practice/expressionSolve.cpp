#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Define stack-related variables
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to push an element to the stack
void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = item;
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

// Function to evaluate a postfix expression
int evaluatePostfixExpression(char* expression) {
    int i = 0;

    // Use a while loop to traverse the expression
    while (expression[i] != '\0') {
        // If the current character is an operand, push it onto the stack
        if (isdigit(expression[i]))
            push(expression[i] - '0');
        else {
            // If the current character is an operator, pop two operands from the stack,
            // perform the operation, and push the result back onto the stack
            int operand2 = pop();
            int operand1 = pop();
            switch (expression[i]) {
                case '+': push(operand1 + operand2); break;
                case '-': push(operand1 - operand2); break;
                case '*': push(operand1 * operand2); break;
                case '/': push(operand1 / operand2); break;
            }
        }
        i++;
    }
    // The final result will be at the top of the stack
    return pop();
}

// Main function to test the program
int main() {
    char expression[] = "23*5+";
    printf("Postfix Expression: %s\n", expression);
    printf("Result: %d\n", evaluatePostfixExpression(expression));
    return 0;
}
