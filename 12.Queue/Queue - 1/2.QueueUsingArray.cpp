#include<iostream>
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
                    front = rear = 0; //toh front and rear ko starting index se start kr do
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
    q.pop();
    q.push(20);
    q.pop();
    q.push(30);
    q.pop();
    q.push(40);
    q.pop();
    q.push(50);
    q.pop();
    q.push(60);
    q.push(70);

    cout << q.getFront() << endl;

    return 0;
}