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
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

int findLength(Node* &head) {
    Node* temp = head;
    int len = 0;
    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

int main() {

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);

    //connet
    head->next = first;
    first->next = second;
    second->next = third;

    //print
    print(head);

    //find length
    int length = findLength(head);
    cout << "Length: " << length << endl;

    //find middle
    int middle = 0;
    if(length % 2 == 0)
        middle = length / 2 + 1;
    else
        middle = length / 2;

    cout << "Middle: " << middle << endl;

    return 0;
}