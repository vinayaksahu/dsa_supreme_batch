#include<iostream>
using namespace std;

class Stack {
    //properties
    private:
        int* arr;
        int size;
        int top;
    
    public: 
        //constructor
        Stack(int size) {
            arr = new int[size];
            this->size = size;
            top = -1;
        }
        
        //behaviour / functions
        //push
        void push(int data) {
            if(size - top > 1) {
                top++;
                arr[top] = data;
            }
            else
                cout << "Stack overflow." << endl;
        }

        //pop
        void pop() {
            if(top == -1)
                cout << "Stack underflow." << endl;
            else 
                top--;
        }

        //top
        int getTop() {
            if(top == -1)
                cout << "Empty stack." << endl;
            else
                return arr[top];
        }

        //size
        int getSize() {
            return top+1;
        }

        //empty
        bool empty() {
            if(top == -1)
                return true;
            else 
                return false;
        }
};

int main() {

    //creation
    Stack s(5);

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    //size
    cout << "Number of element in Stack: " << s.getSize() << endl;

    //print
    while (!s.empty()) {
        cout << s.getTop() << " ";
        s.pop();
    } cout << endl;

    //size
    cout << "Number of element in Stack: " << s.getSize() << endl;
    
    return 0;
}