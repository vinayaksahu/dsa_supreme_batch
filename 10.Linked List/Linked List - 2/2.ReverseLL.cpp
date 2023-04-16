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

void insertAtTail(Node* &head, Node* &tail, int data) {
    //check for empty LL
    if (head == NULL) {
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    Node* newnode = new Node(data);
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    //check for empty LL
    if (head == NULL) {
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    //insert at starting of LL
    if (position == 0) {
        insertAtHead(head, tail, data);
        return;
    }

    //insert at last of LL
    int len = findLength(head);
    if (position >= len) {
        insertAtTail(head, tail,data);
        return;
    }

    //insert at middle  
    Node* prevNode = head;
    int i = 1;
    while (i < position) {
        prevNode = prevNode->next;
        i++;
    } Node* currNode = prevNode->next;

    Node* newnode = new Node(data);
    prevNode->next = newnode;
    newnode->prev = prevNode;
    newnode->next = currNode;
    currNode->prev = newnode;    

}

void deleteNode(Node* &head, Node* &tail, int position) {

    //check for empty LL
    if (head == NULL) {
        cout << "Linked List is empty.";
        return;
    }

    //Invalid Position
    int len = findLength(head);
    if (position > len || position < 1) {
        cout << "Please enter valid position to delete." << endl;
        return;
    }
    

    //delete head
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    
    //delete tail
    if (position == len) {
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    

    //delete middle
    Node* left = head;
    int i = 1;
    while (i < position - 1) {
        left = left->next;
        i++;
    }
    /*with right node*/
    Node* curr = left->next;
    Node* right = curr->next;
    left->next = right;
    curr->prev = NULL;
    right->prev = left;
    curr->next = NULL;
    delete curr;

}

int main() {

    //create independant node
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    //connect all nodes and make doubly LL
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;

    //assign head and tail
    Node* head = first;
    Node* tail = third;

    //print
    print(head);
    int len =  findLength(head);
    cout << "Length: " << len << endl
         << endl;

/**************************************************************/

    //insert at head
    cout << "Insert at head: " << endl;
    insertAtHead(head, tail, 9);

    //print
    print(head);
    len =  findLength(head);
    cout << "Length: " << len << endl
         << endl;

/**************************************************************/

    //insert at tail
    cout << "Insert at Tail: " << endl;
    insertAtTail(head, tail, 31);

    //print
    print(head);
    len =  findLength(head);
    cout << "Length: " << len << endl
         << endl;

/**************************************************************/

    //insert at Position
    cout << "Insert at Position: " << endl;
    int position = 4;
    int data = 1000;
    insertAtPosition(head, tail, data, position);

    //print
    print(head);
    len =  findLength(head);
    cout << "Length: " << len << endl
         << endl; 

/**************************************************************/

    //deletion
    position = 3;
    cout << "Position to delete node: " << position << endl;
    deleteNode(head, tail, position);

    //print
    print(head);
    len =  findLength(head);
    cout << "Length: " << len << endl
         << endl; 

    return 0;
}