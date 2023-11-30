#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if the character is an operator (+, -, *, /, ^).
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// Function to check if the character is an opening parenthesis '('.
bool isOpeningParenthesis(char c) {
    return c == '(';
}

// Function to check if the character is a closing parenthesis ')'.
bool isClosingParenthesis(char c) {
    return c == ')';
}

// Function to get the precedence of an operator.
int getPrecedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0; // Lower precedence for other characters (operands).
}

// Function to convert infix expression to postfix expression.
string infixToPostfix(const string& infix) {
    string postfix;
    stack<char> operatorStack;

    for (char c : infix) {
        if (isalnum(c)) {
            postfix.push_back(c); // If operand, append to the postfix expression.
        } else if (isOperator(c)) {
            // Pop operators from the stack and append to the postfix expression
            // until an operator with lower precedence is encountered.
            while (!operatorStack.empty() && isOperator(operatorStack.top()) &&
                   getPrecedence(c) <= getPrecedence(operatorStack.top())) {
                postfix.push_back(operatorStack.top());
                operatorStack.pop();
            }
            operatorStack.push(c); // Push the current operator onto the stack.
        } else if (isOpeningParenthesis(c)) {
            operatorStack.push(c); // Push the opening parenthesis onto the stack.
        } else if (isClosingParenthesis(c)) {
            // Pop operators from the stack and append to the postfix expression
            // until an opening parenthesis is encountered. Pop and discard the '(' as well.
            while (!operatorStack.empty() && !isOpeningParenthesis(operatorStack.top())) {
                postfix.push_back(operatorStack.top());
                operatorStack.pop();
            }
            operatorStack.pop(); // Pop and discard the opening parenthesis.
        }
    }

    // Pop any remaining operators from the stack and append them to the postfix expression.
    while (!operatorStack.empty()) {
        postfix.push_back(operatorStack.top());
        operatorStack.pop();
    }

    return postfix;
}

int main() {
    string infixExpression = "(A+B)";
    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Infix Expression: " << infixExpression << endl;
    cout << "Postfix Expression: " << postfixExpression << endl;
    return 0;
}