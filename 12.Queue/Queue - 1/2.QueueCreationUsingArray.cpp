#include<iostream>
#include<limits.h>
using namespace std;

class Queue {

    private:
        int *arr;
        int size;
        int front;
        int rear;

    public:
        Queue(int size) {
            arr = new int[size];
            this->size = size;
            front = rear = 0;
        }

        //push
        void push(int data) {
            if(rear == size) {
                cout << "Queue is overflow." << endl;
            } else {
                arr[rear] = data; 
                rear++;
            }
        }

        //pop
        void pop() {
            if (front == rear) {
                cout << "Queue is underflow." << endl;
            }
            else {
                //arr[front] = INT_MIN;
                front++;
                if (front == rear) { // ho skta hai front++ krk front == rear
                    front = rear = 0;
                }
            }
        }

        //front
        int getFront() {
            return arr[front];
        }

        //size
        int getSize() {
            return rear - front;
        }

        //empty
        bool isEmpty() {
            return (front == rear);
        }

        void print(Queue q) {
            while (!q.isEmpty()) {
                cout << q.getFront() << " ";
                q.pop();
            } cout << endl;
        }
};

int main() {

    Queue q(5);

    q.push(10);
    q.print(q);
    q.push(20);
    q.push(30);
    q.print(q);
    q.push(40);
    q.push(50);
    cout << "Size: " << q.getSize() << endl;

    cout << "Front: " << q.getFront() << endl;

    q.pop();
    cout << "Size: " << q.getSize() << endl;
    cout << "Front: " << q.getFront() << endl;
    q.pop();
    q.print(q);
    q.pop();

    cout << "Size: " << q.getSize() << endl;

    if (q.isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }
    
    q.print(q);

    return 0;
}