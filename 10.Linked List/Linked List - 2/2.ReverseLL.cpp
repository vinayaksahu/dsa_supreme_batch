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
    if(curr == NULL) {
        //LL reversed to new LL ka head will be prev
        return prev;
    }
    
    //1 case solve kr do
    Node* forw = curr->next;
    curr->next = prev;
    //forw->next = curr;

    //baki recursion sambhal lega
    reverse(curr, forw);
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

/**************************************************************/

    //insert at head
    cout << "Insert at head: " << endl;
    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 4);
    insertAtHead(head, tail, 3);
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 1);

    //print
    print(head);

/**************************************************************/

    //Reverse
    Node* prev = NULL;
    Node* curr = head;
    cout << "Reverse above Linked List: " << endl;
    head = reverse(prev, curr);

    //print
    print(head);

    return 0;
}