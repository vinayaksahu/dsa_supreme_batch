#include<iostream>
#include<stack>
using namespace std;

void insertAtBottomToTopElement(stack<int> &s, int topElement) {
    //base case
    if(s.empty()) {
        s.push(topElement);
        return;
    }

    int temp = s.top();
    s.pop();

    //recursion
    insertAtBottomToTopElement(s, topElement);

    //backtrack
    s.push(temp);
}

void reverseStack(stack<int> &s) {

    //base case
    if (s.empty()) {
        return;
    }
    
    int topElement = s.top();
    s.pop();

    //RC
    reverseStack(s);

    //BT
    insertAtBottomToTopElement(s, topElement); 
}

void print(stack<int> s) {

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
}

int main() {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    print(s);

    reverseStack(s);

    print(s);

    return 0;
}