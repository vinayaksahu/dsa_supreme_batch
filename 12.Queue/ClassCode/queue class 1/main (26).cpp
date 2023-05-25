#include <iostream>
using namespace std;

class CirQueue{
        public:
        int size;
        int *arr;
        int front;
        int rear;

        CirQueue(int size) {
                this->size = size;
                arr = new int[size];
                front = -1;
                rear = -1;
        }

        void push(int data) {

                //TODO: add one more condition in the QUEUE FULL if block
                if((front == 0 && rear == size-1)) { //Queue Full
                        cout << "Q is fulll, cannot insert" << endl;
                }
                else if(front == -1) { //single element case - > first element
                        front = rear = 0;
                        arr[rear] = data;
                }
                else if(rear == size-1 && front != 0 ) { //circular nature
                        rear = 0;
                        arr[rear] = data;
                }
                else{ //normal flow
                        rear++;
                        arr[rear]= data;
                } 
        }

        void pop() {
                
                if(front == -1) { //empty check
                        cout << "Q is empty , cannot pop" << endl;
                }
                else if (front == rear) { //single element
                        arr[front] = -1;
                        front = -1;
                        rear = -1;  
                }
                else if(front == size-1) { //circular nature
                        front = 0;
                }
                else { //normal flow
                        front++;
                }
        }

};

int main() {
  cout << "Hello world!" << endl;
  return 0;
}