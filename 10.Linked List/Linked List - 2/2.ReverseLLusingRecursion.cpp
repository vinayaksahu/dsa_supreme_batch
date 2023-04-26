#include<iostream>
using namespace std;

class Node {

    public:
        int data;
        Node* prev;
        Node* next;
        
        Node() {
            this->data = 0;
            this->prev = NULL;
            this->next = NULL;
        }
        Node(int data) {
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
};

void print(Node* &head) {

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    //check for empty LL
    if (head == NULL) {
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    Node* newnode = new Node(data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;   
}

Node* reverse(Node* &prev, Node* &curr) {
    //base case
    if (curr == NULL)
        return prev;
    
    //1 case
    Node* temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;

    //recursion
    return reverse(prev, curr);
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

/**************************************************************/

    //insert at head
    cout << "Given Linked List: " << endl;
    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 4);
    insertAtHead(head, tail, 3);
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 1);

    //print
    print(head);

/**************************************************************/

    //Reverse using Reursion
    Node* prev = NULL;
    Node* curr = head;
    cout << "Reverse above Linked List: " << endl;
    head = reverse(prev, curr);

    //print
    print(head);

    return 0;
}