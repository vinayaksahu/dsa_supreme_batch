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

int findLen(Node* head) {
    Node* temp = head;
    int len = 0;
    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    //check for empty LL
    if(head == NULL) {
        //create new node
        Node* newNode = new Node(data);
        //newNode ko head name dedo
        head = newNode;
        //usi ko tail name v rkh do
        tail = newNode;
        return;
    }
    //create new node
    Node* newNode = new Node(data);
    //connect newnode to head
    newNode->next = head;
    //update head
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    //check for empty LL
    if(head == NULL) {
        //new node bnao
        Node* newNode = new Node(data);
        //head nam rkho
        head = newNode;
        //tail nam v rkh do
        tail = newNode;
        return;
    }
    //create new node
    Node* newNode = new Node(data);
    //connect tail to newnode
    tail->next = newNode;
    //update tail
    tail = newNode;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    //check for empty LL
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    //insert at head
    if(position == 0) {
        insertAtHead(head, tail, data);
        return;
    }
    //find lenght
    int len = findLen(head);    
    //insert at tail
    if(position >= len) {
        insertAtTail(head, tail, data);
        return;
    }
    //insert at middle (head and tail ke bich me khin bhi)
        //iske liye prev aur current node nikalo
    int i = 1;
    Node* prev = head;
    while (i < position) {
        prev = prev->next;
        i++;
    }
    Node* current = prev->next;

    //new node bnao
    Node* newNode = new Node(data);
    //newnode ko current se link krao
    newNode->next = current;
    //prev node ko newnode se link krao
    prev->next = newNode;
    
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
    cout << "Length: " << findLen(head) << endl;
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl << endl;


    //insert at position
    int position = 5;
    cout << "Insert at " << position << "th position" <<endl;
    insertAtPosition(head, tail, 500, position);
    //print
    print(head); 
    cout << "Length: " << findLen(head) << endl;
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl << endl;

    return 0;
}