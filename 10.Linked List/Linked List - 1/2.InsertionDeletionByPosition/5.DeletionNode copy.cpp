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
        ~Node() {
            cout << "Node with value " << this->next << " deleted " << endl;;
        }
};

int findLength(Node* head) {
    Node* temp = head;
    int len = 0;
    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    //check for Empty LL
    if(head == NULL) {
        //create node
        Node* newnode = new Node(data);
        //update head
        head = newnode;
        //update tail
        tail = newnode;
        return;
    }

    //create node
    Node* newnode = new Node(data);
    //connect newnode to head
    newnode->next = head;
    //update head
    head = newnode;
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    //check for empty LL
    if (head == NULL) {
        //create new node
        Node* newnode = new Node(data);
        //update head
        head = newnode;
        //update tail
        tail = newnode;
        return;
    }
    //create newnode
    Node* newnode = new Node(data);
    //connect tail to newnode
    tail->next = newnode;
    //update tail
    tail = newnode;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    //check for empty LL
    if (head == NULL) {
        //create node
        Node* newnode = new Node(data);
        //update head & tail
        head = newnode;
        tail = newnode;
        return;
    }
    
    //insert at the head
    if(position == 0) {
        insertAtHead(head, tail, data);
        return;
    }

    //insert at the tail
    int len = findLength(head);
    if(position >= len) {
        insertAtTail(head, tail, data);
        return;
    }

    //insert at middle - find 1st previous and current node
    Node* prev = head;
    int i = 1;
    while(i < position) {
        prev = prev->next; 
        i++;
    }
    Node* curr = prev->next;

    //create newnode    
    Node* newnode = new Node(data);
    //connect newnode to current node
    newnode->next = curr;
    //connect previous node to currrent node 
    prev->next = newnode;
}

void deleteNode(Node* &head, Node* &tail, int position) {
    //check for empty
    if (head == NULL) {
        cout << "Linked list is empty" << endl;
        return; 
    }

    //delete first node
    if (position == 1) {
        Node* temp = head; //head ko temp nam rkho
        head = head->next; //head k next ko head bnao
        temp->next = NULL; //temp ko null kr do
        delete temp; //delete kr do
        return;
    }
    

    //delete last node
    int len = findLength(head);
    if (position == len) {
        //find prev of tail
        int i = 1;
        Node* prev = head;
        while (i < position-1) {
            prev = prev->next;
            i++;
        }

        //prev->next ko null kr diya
        prev->next = NULL;
        //update tail
        Node* temp = tail;
        tail = prev;
        //delete last node
        delete temp;
        return;
    }

    //delete middle node
    //  find prev and curr
    int i = 1;
    Node* prev = head;
    while(i < position - 1) {
        prev = prev->next;
        i++;
    } Node* curr = prev->next;
    
    //connect previous to current ka next
    prev->next = curr->next;
    //delete current node
    delete curr;
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    //insert at head
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    //insert at tail
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);

    //print
    print(head);

    //print head & tail
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    //lenght of above LL
    cout << "Length: "<< findLength(head) << endl 
         << endl;

/******************************************************/

    //insert at position
    int position = 0;
    cout << "Insert Position: " << position << endl;
    insertAtPosition(head, tail, 500, position);

    //print
    print(head);

    //print head & tail
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl
         << endl;

/******************************************************/

    //delete node
    position = 3;
    cout << "Delete: " << position << endl;
    deleteNode(head, tail, position);

    //print
    print(head);

    //print head & tail
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    
    return 0;
}