#include<iostream>
using namespace std;

class CirQueue {

    private:
        int *arr;
        int size;
        int front;
        int rear;

    public:
        CirQueue(int size) {
            arr = new int[size];
            this->size = size;
            front = rear = -1;
        }

        void push(int data) {
            
            if (front == 0 && rear == size-1 || front - rear == 1) { //Q is full
                cout << "Q is full" << endl;
            }

/*             else if(front == -1) { //single element
                front = rear = 0;
                arr[rear] = data;
            }

            else if (front != 0 && rear == size-1) {//Circular case
                rear = 0;
                arr[rear] = data;
            }
            else { //normal case
                rear++;
                arr[rear] = data;
            } */
            
            else if(front == -1) { //single element
                front = rear = 0;
            }

            else if (front != 0 && rear == size-1) {//Circular case
                rear = 0;
            }
            else { //normal case
                rear++;
            }
            arr[rear] = data;  
        }

        void pop() {
            //Q is empty
            if (front == -1) {
                cout << "Q is empty" << endl;
            }
            
            //single element
            else if(front == rear) {
                front = rear = -1;
            }

            //Circular case
            else if(front == size-1) {
                front = 0;
            }
            
            //normal case
            else {
                front++;
            }
        } 

        bool isEmpty() {
            return rear-front;
        }
};

int main() {

    CirQueue cq(5);

    cq.push(10);


    return 0;
}