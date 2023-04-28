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

bool circularOrNot(Node* &head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }
    return false;
}

Node* slowFastMeetingPointData(Node* &head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast)
            return slow;
    }
}

bool isLoopPresent(Node* &head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next;
        if(fast != NULL)
            fast = fast->next;
            slow = slow->next;
        if(slow == fast)
            return true;
    } 
    return false;
}

Node* startingPoint(Node* &head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast) {
            slow = head;
            break;
        }
    }
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

void removeLoop(Node* &head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast) {
            slow = head;
            break;
        }
    }
    Node* prev = fast;
    while (slow != fast) {
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
    //return slow;
}

int main() {

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);
    Node* sixth = new Node(70);
    Node* senventh = new Node(80);
    Node* eighth = new Node(90);
    Node* ninth = new Node(100);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = senventh;
    senventh->next = eighth;
    eighth->next = ninth;
    ninth->next = sixth;


    //print(head);

    cout << "LL circular or not: " << circularOrNot(head) << endl;

    cout << "slow Fast Meeting Point Data: " << slowFastMeetingPointData(head)->data << endl;

    cout << "Loop present or not: " << isLoopPresent(head) << endl;

    cout << "Starting point of the loop: " << startingPoint(head)->data << endl;

    removeLoop(head);
    print(head);

    return 0;
}