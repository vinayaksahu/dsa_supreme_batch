#include<iostream>
#include<stack>
using namespace std;

class Stack {
    //properties
    private:
        int *arr;
        int top;
        int size;

    public:
    //constructor
    Stack(int size) {
        arr = new int(size);
        this->size = size;
        top = -1;
    }

    //behaviour / functions
    void push(int data) {
        if(size - top > 1) {
            top++;
            arr[top] = data;
        } else {
            cout << "Stack overflow." << endl;
        }
    }

    void pop() {
        if(top == -1)
            cout << "Stack underflow." << endl;
        else
            top--;
    }

    int topp() {
        if(top == -1)
            cout << "There is not element in stack." << endl;
        else    
            return arr[top];
    }

    int sizep() {
        return top + 1;
    }

    bool empty() {
        if(top == -1)
            return true;
        else    
            return false;
    }

};

int main() {
    
  //CREATION
  Stack s(5);

  //insertion
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);

  //check element on top
  cout << "check element on top: " << s.topp() << endl;

  while(!s.empty()) {
        cout << s.topp() << " ";
        s.pop();
  }cout << endl;

  cout << "Size of stack " << s.sizep() << endl;

  s.pop();

  return 0;
}