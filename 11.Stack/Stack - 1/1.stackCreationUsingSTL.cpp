#include<iostream>
#include<stack>
using namespace std;

int main() {
    
    //creation
    stack<int> s;

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    //remove top element
    s.pop();

    //check element on top
    cout << "Top element of the array: " <<s.top() << endl; 

    //size
    s.size();

    //isEmpty
    if(!s.empty())
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    //print element of the stack
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
    

    return 0;
}