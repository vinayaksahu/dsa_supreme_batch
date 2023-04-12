#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

void insertAtTail(Node* &tail, int data) {
    //step:1 - create new node
    Node* newNode = new Node(data);

    //step:2 - link tail node to new node
    tail->next = newNode;

    //step:3 - assign new node as tail node
    tail = newNode;
}

void print(Node* &tail) {
    Node* temp = tail;
    while(temp != NULL) {
        cout << temp->data;
        temp = temp->next;
    }
}

int main() {

    Node* tail = new Node(0);

    //insertion
    insertAtTail(tail, 10);

    //print
    print(tail);

    return 0;
}