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

/* Node* getMiddle(Node* &head) {

    //if LL is null
    if(head == NULL)
        return head;

    //LL has 1 node
    if(head->next == NULL)
        return head;

    //LL has > 1 node
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
} */

Node* getMiddle(Node* &head) {
    
}

int main() {

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    //print 
    print(head);

    //middle
    //cout << "Middle (Tortois algorithm): " << getMiddle(head)->data; // slow & fast method

    cout << "Middle: " << getMiddle(head)->data;

    return 0;
}