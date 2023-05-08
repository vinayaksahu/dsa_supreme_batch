#include<iostream>
using namespace std;

class Stack {
    private:
        int* arr;
        int size;
        int top1;
        int top2;

    public:
        Stack(int size) {
            arr = new int[size];
            this->size = size;
            top1 = -1;
            top2 = size;
        }

        void push1(int data) {
/*          if(top2 - top1 > 1) {
                top1++;
                arr[top1] = data; 
            }
            else
                cout << "Stack1 overflow." << endl; */
            if(top2 - top1 == 1) {
                cout << "Stack1 overflow." << endl;
            }
            else {
                top1++;
                arr[top1] = data;  
            }
        }

        void push2(int data) {
/*          if(top2 - top1 > 1) {
                top2--;
                arr[top2] = data;
            }
            else {
                cout << "Stack2 overflow." << endl;
            } */
            if(top2 - top1 == 1) {
                cout << "Stack2 overflow." << endl;
            }
            else {
                top2--;
                arr[top2] = data;
            }
        }

        void pop1() {
            if(top1 == -1) 
                cout << "Stack1 underflow." << endl;
            else {
                arr[top1] = 0;
                top1--;
            }
        }

        void pop2() {
            if(top2 == size) 
                cout << "Stack2 underflow." << endl;
            else {
                arr[top2] = 0;
                top2++;
            }
        }

        void print() {
            cout << endl;
            cout << "top1: " << top1 << endl;
            cout << "top2: " << top2 << endl;
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            } cout << endl;    
        }
};

int main() {

    Stack s(10);

    s.push1(10);
    s.print();

    s.push2(20);
    s.print();

    s.push1(10);
    s.print();

    s.push2(20);
    s.print();

    s.push1(10);
    s.print();

    s.push2(20);
    s.print();

    s.push1(10);
    s.print();

    s.push2(20);
    s.print();

    s.push1(10);
    s.print();

    s.push2(20);
    s.print();

    s.push1(10);
    s.print();

    return 0;
}