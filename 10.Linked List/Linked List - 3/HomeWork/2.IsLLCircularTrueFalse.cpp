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

    // If the list is empty, return
    if (head == NULL) {
        return;
    }

    // Traverse through the list until you reach the head again
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

bool isCircularSinglePointer(Node* &head) {

    Node* temp = head;
    while (temp != NULL) {
        if(temp->next == head)
            return true;
        temp = temp->next;       
    }
    return false;
}

bool isCircularSlowFastPointer(Node* &head) {

    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;        
    }
    return false;
}

bool isCircularUsingMap(Node* &head) {
    
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
    //fourth->next = head;

    //using single pointer
    if (isCircularSinglePointer(head))
        cout << "The linked list is circular." << endl;
    else
        cout << "The linked list is not circular." << endl;

    //using slow fast pointer
    if (isCircularSlowFastPointer(head))
        cout << "The linked list is circular." << endl;
    else
        cout << "The linked list is not circular." << endl;

    //using map
    if (isCircularUsingMap(head))
        cout << "The linked list is circular." << endl;
    else
        cout << "The linked list is not circular." << endl;

    return 0;
}