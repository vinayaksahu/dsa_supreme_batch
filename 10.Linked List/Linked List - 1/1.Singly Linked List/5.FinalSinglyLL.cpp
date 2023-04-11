#include<iostream>
using namespace std;

class Node {

    public:
        int data;
        Node* next;

        Node() {
            this->data = 0;
            this->next = NULL;
        }

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

void print (Node* &head) {

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    Node* first = new Node(10); //node created named "first" pointing to NULL
    Node* second = new Node(20); //node created named "second" pointing to NULL
    Node* third = new Node(30); //node created named "third" pointing to NULL
    Node* fourth = new Node(40); //node created named "fourth" pointing to NULL
    Node* fifth = new Node(50); //node created named "fifth" pointing to NULL

    //Link nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    //print Linked List
    cout << "Print Linked List:" << endl;
    print(first);

    return 0;
}