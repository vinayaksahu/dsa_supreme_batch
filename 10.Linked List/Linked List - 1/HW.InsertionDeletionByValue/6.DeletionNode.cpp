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

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

int findLength(Node* &head) {
    Node* temp = head;
    int len = 0;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data) {

    if (head == NULL) { //check for empty LL
        Node* newnode = new Node(data); //create node
        head = newnode; //update head
        tail = newnode; //& tail
        return;
    }

    Node* newnode = new Node(data); //create newnode
    newnode->next = head; //connect newnode to head
    head = newnode; // update head
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    
    if (head == NULL) { //check for empty LL
        Node* newnode = new Node(data); //create newnode
        head = newnode; //update head
        tail = newnode; //& tail
        return;
    }

    Node* newnode = new Node(data); //create newnode
    tail->next = newnode; //connet tail to newnode
    tail = newnode; //update tail
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    
    if (head == NULL) { //check for empty LL
        Node* newnode = new Node(data); //create newnode
        head = newnode; //update head
        tail = newnode; //&tail
        return;
    }    

    //insert at head
    if (position == 0) {
        insertAtHead(head, tail, data);
        return;
    }

    //insert at tail
    int len = findLength(head);
    if (position >= len) {
        insertAtTail(head, tail, data);
        return;
    }

    //insert at middle
    Node* prev = head; //find previous node
    int i = 1;
    while (i < position) {
        prev = prev->next;
        i++;
    } Node* curr = prev->next; //& current node
    
    Node* newnode = new Node(data); //create newnode
    newnode->next = curr; //connect newnode to curr
    prev->next = newnode; //connect prev to newnode    

}

void deletion(Node* &head, Node* &tail, int position) {
    
    if (head == NULL) { //check for empty LL
        cout << "Linked List is Empty." << endl;
        return;
    }

    //delete head
    if (position == 1) {
        Node* temp = head; //name temp to head
        head = head->next; //update head
        temp->next = NULL; //assign temp to NULL
        delete temp;
    }
    
    //delete tail
    int len = findLength(head);
    if (position == len) {
        //find previous node of tail node
        Node* prev = head;
        int i = 1;
        while (i < position - 1) {
            prev = prev->next;
            i++;
        }
        Node* temp = tail; //name temp to tail
        tail = prev; //update tail
        tail->next = NULL; //assign tail to NULL
        delete temp; //delete temp
        return;
    }

    //delete middle
    
    Node* prev = head;
    int i = 1;
    while(i < position - 1) {
        prev = prev->next; //find previous 
        i++;
    } Node* curr = prev->next; //& current node

    prev->next = curr->next; //connect previous to next node of current node
    curr->next = NULL; //assign current node to NULL
    delete curr; //delete current node

}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    //insert head
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    //insert tail
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);

    //print
    print(head);

    //length
    int len = findLength(head);
    cout << "Length: " << len << endl
         << endl;

/*******************************************************/

    //insert at position
    int position = 6;
    int data = 500;
    cout << "Position to insert data: " << position << endl;
    insertAtPosition(head, tail, data, position);

    //print
    print(head);

/*******************************************************/

    //deletion
    int deleteNode = 3;
    cout << "Delete Node: " << deleteNode << endl;
    deletion(head, tail, deleteNode);

    //print
    print(head);

    return 0;
}