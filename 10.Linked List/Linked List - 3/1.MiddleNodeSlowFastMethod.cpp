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
        temp = temp ->next;
    } cout << endl;
}

//getMiddle - revision
/* Node* getmiddle(Node* & head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
 */

//getMiddle
Node* getmiddle(Node* &head) {

    //if LL is empty
    if (head == NULL) {
        return head;
    }
    
    //if LL has 1 node
    if (head->next == NULL) {
        return head;
    }

    //if LL > 1 node
    Node* slow = head;
    //Node* fast = head; //for odd nodes of LL only
    Node* fast = head->next; //for even nodes of LL only
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}


int main() {

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    //print
    print(head);

    //get middle
    cout << "Middle Node: " << getmiddle(head)->data << endl;

    return 0;
}