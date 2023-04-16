#include<iostream>
using namespace std;

class Node {

    public: 

        int data; // store data
        Node* next; // store reference to the next node

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

//I want to insert a node right at the head of the Linked List
void insertAtHead(Node* &head, int data) {
    //step-1: create new node
    Node* newNode = new Node(data);

    //step-2: Link "newNode" to "head"
    newNode->next = head;

    //step-3: newNode node ko head node bna do
    head = newNode;
}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    //Node* head = new Node(0);
    Node* head = NULL;

    //insertion at head
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    //print
    cout << "Print the Linked List: " << endl;
    print(head);

    return 0;
}